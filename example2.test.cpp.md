---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"example2.test.cpp\"\n#define PROBLEM \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <set>\n#include <unordered_set>\n\
    #include <vector>\n#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))\n\
    #define ALL(x) std::begin(x), std::end(x)\nusing namespace std;\n\nint main()\
    \ {\n  ios::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n  int n;\n  cin\
    \ >> n;\n  unordered_set<int> s;\n  REP(i, n) {\n    int a;\n    cin >> a;\n \
    \   s.insert(a);\n  }\n  int q;\n  cin >> q;\n  int cnt = 0;\n  vector<int> t(q);\n\
    \  REP(i, q) cin >> t[i];\n  REP(i, q) { cnt += s.count(t[i]); }\n  cout << cnt\
    \ << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <set>\n#include <unordered_set>\n\
    #include <vector>\n#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))\n\
    #define ALL(x) std::begin(x), std::end(x)\nusing namespace std;\n\nint main()\
    \ {\n  ios::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n  int n;\n  cin\
    \ >> n;\n  unordered_set<int> s;\n  REP(i, n) {\n    int a;\n    cin >> a;\n \
    \   s.insert(a);\n  }\n  int q;\n  cin >> q;\n  int cnt = 0;\n  vector<int> t(q);\n\
    \  REP(i, q) cin >> t[i];\n  REP(i, q) { cnt += s.count(t[i]); }\n  cout << cnt\
    \ << endl;\n  return 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: example2.test.cpp
  requiredBy: []
  timestamp: '2025-08-13 23:09:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example2.test.cpp
layout: document
redirect_from:
- /verify/example2.test.cpp
- /verify/example2.test.cpp.html
title: example2.test.cpp
---
