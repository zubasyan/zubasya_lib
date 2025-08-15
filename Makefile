# Makefile — syntax-only checks for lib/ and test/
# Default: run header(.hpp/.h) and source(.cpp/.cc/.cxx) syntax checks using g++ -fsyntax-only

# -------------------------
# Variables
# -------------------------
CXX ?= g++
CXXFLAGS ?= -std=c++20 -Wall -Wextra -Wpedantic

LIB_DIR := lib
TEST_DIR := test
BUILD_DIR := build

INCLUDES := -I$(LIB_DIR)

# -------------------------
# Targets
# -------------------------
.PHONY: all check clean help

# default target: run checks
all: check

# run syntax-only checks for headers and sources
check:
	@echo "🔎 Running syntax-only checks (headers and sources)"
	@set -e; \
	# headers: .hpp .h inside lib/
	echo "Checking headers in $(LIB_DIR)..."; \
	find $(LIB_DIR) -type f \( -name "*.hpp" -o -name "*.h" \) -print0 | \
	while IFS= read -r -d '' file; do \
		printf " header: %s\n" "$$file"; \
		$(CXX) $(CXXFLAGS) $(INCLUDES) -fsyntax-only -x c++-header "$$file"; \
	done; \

	# sources: .cpp .cc .cxx inside lib/ and test/
	echo "Checking sources in $(LIB_DIR) and $(TEST_DIR)..."; \
	find $(LIB_DIR) $(TEST_DIR) -type f \( -name "*.cpp" -o -name "*.cc" -o -name "*.cxx" \) -print0 | \
	while IFS= read -r -d '' file; do \
		printf " source: %s\n" "$$file"; \
		$(CXX) $(CXXFLAGS) $(INCLUDES) -fsyntax-only "$$file"; \
	done; \

	echo "✅ Syntax check passed."

clean:
	@echo "🧹 Cleaning up (no persistent artifacts are produced by checks)"
	@rm -rf $(BUILD_DIR)

help:
	@echo "Makefile for syntax-only checks"
	@echo "\nUsage:"
	@echo "  make        (runs syntax checks - default)"
	@echo "  make check  (same as default)"
	@echo "  make clean  (remove build/ if any)"
	@echo "\nVariables you can override:"
	@echo "  CXX        (default: g++)"
	@echo "  CXXFLAGS   (default: -std=c++20 -Wall -Wextra -Wpedantic)"
