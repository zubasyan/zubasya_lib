#pragma once
#include <cassert>
#include <numeric>
#include <type_traits>
#include <vector>

namespace zbs {
template <typename T, typename F>
T binary_search_on_answer(bool to_maximize, T X_l, T X_u, F f,
                          int step_num = 200) {
  assert(X_l <= X_u);
  if constexpr (std::is_integral_v<T>) {
    T ok = X_u, ng = X_l;
    if (to_maximize) swap(ok, ng);
    for (; abs(ok - ng) > 1;) {
      T mid = std::midpoint(ok, ng);
      (f(mid) ? ok : ng) = mid;
    }
    return ok;
  } else if constexpr (std::is_floating_point_v<T>) {
    T ok = X_u, ng = X_l;
    if (to_maximize) swap(ok, ng);
    for (int step = 0; step < step_num; step++) {
      T mid = std::midpoint(ok, ng);
      (f(mid) ? ok : ng) = mid;
    }
    return ok;
  } else {
    assert(0 && "X_l, X_uは整数型か小数型でないといけない");
  }
}

}  // namespace zbs