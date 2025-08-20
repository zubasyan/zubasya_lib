---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"lib/binary_search_on_answer.hpp\"\n#include <cassert>\n\
    #include <numeric>\n#include <type_traits>\n#include <vector>\nnamespace zbs {\n\
    using namespace std;\n\ntemplate <typename T, typename F>\nT binary_search_on_answer(bool\
    \ to_maximize, T X_l, T X_u, F f,\n                          int step_num = 200)\
    \ {\n  assert(X_l <= X_u);\n  if constexpr (std::is_integral_v<T>) {\n    T ok\
    \ = X_u, ng = X_l;\n    if (to_maximize) swap(ok, ng);\n    for (; abs(ok - ng)\
    \ > 1;) {\n      T mid = std::midpoint(ok, ng);\n      (f(mid) ? ok : ng) = mid;\n\
    \    }\n    return ok;\n  } else if constexpr (std::is_floating_point_v<T>) {\n\
    \    T ok = X_u, ng = X_l;\n    if (to_maximize) swap(ok, ng);\n    for (int step\
    \ = 0; step < step_num; step++) {\n      T mid = std::midpoint(ok, ng);\n    \
    \  (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n  } else {\n    assert(0\
    \ && \"X_l, X_u\u306F\u6574\u6570\u578B\u304B\u5C0F\u6570\u578B\u3067\u306A\u3044\
    \u3068\u3044\u3051\u306A\u3044\");\n  }\n}\n\n}  // namespace zbs\n"
  code: "#pragma once\n#include <cassert>\n#include <numeric>\n#include <type_traits>\n\
    #include <vector>\nnamespace zbs {\nusing namespace std;\n\ntemplate <typename\
    \ T, typename F>\nT binary_search_on_answer(bool to_maximize, T X_l, T X_u, F\
    \ f,\n                          int step_num = 200) {\n  assert(X_l <= X_u);\n\
    \  if constexpr (std::is_integral_v<T>) {\n    T ok = X_u, ng = X_l;\n    if (to_maximize)\
    \ swap(ok, ng);\n    for (; abs(ok - ng) > 1;) {\n      T mid = std::midpoint(ok,\
    \ ng);\n      (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n  } else if constexpr\
    \ (std::is_floating_point_v<T>) {\n    T ok = X_u, ng = X_l;\n    if (to_maximize)\
    \ swap(ok, ng);\n    for (int step = 0; step < step_num; step++) {\n      T mid\
    \ = std::midpoint(ok, ng);\n      (f(mid) ? ok : ng) = mid;\n    }\n    return\
    \ ok;\n  } else {\n    assert(0 && \"X_l, X_u\u306F\u6574\u6570\u578B\u304B\u5C0F\
    \u6570\u578B\u3067\u306A\u3044\u3068\u3044\u3051\u306A\u3044\");\n  }\n}\n\n}\
    \  // namespace zbs"
  dependsOn: []
  isVerificationFile: false
  path: lib/binary_search_on_answer.hpp
  requiredBy: []
  timestamp: '2025-08-20 17:28:53+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/binary_search_on_answer.hpp
layout: document
title: Binary search on answer
---

# 決め打ち二分探索 (Binary search on answer)

ある条件 P(x) を判定できる関数 f(x) があり、f の値が x に対して単調である（false が続いてから true、またはその逆に変化する）場合に、条件を満たす最小値／最大値を高速に求めるための汎用ヘルパーです。整数型・浮動小数点型の両方に対応します。

## 概要

- 最小化問題（to_maximize = false）: f(x) が false,...,false, true,...,true のように変化するとき、条件を満たす最小の x を返します。  
- 最大化問題（to_maximize = true）: f(x) が true,...,true, false,...,false のように変化するとき、条件を満たす最大の x を返します。  
- T が整数型のときは区間の境界を整数として扱います。T が浮動小数点型のときは繰り返し回数で精度を確保します。

## 使用例

整数で最小値を求める例:
```cpp
// 例: int 型で最小の x を探す
auto f = [&](int x){ return x*x >= 20; };
int ans = binary_search_on_answer<int>(false, 0, 10, f);
```

浮動小数点で最大値を求める例:
```cpp

// 例: double 型で条件を満たす最大値（step_num は反復回数）
auto f = [&](double x){ return some_condition(x); };
double ans = binary_search_on_answer<double>(true, 0.0, 10.0, f, 200);
```

## パラメータ

- T  
  探索する答えの型。int, long long, double など。

- F  
  判定関数の型。T 型の引数を1つ取り bool を返す関数オブジェクト（ラムダ等）。

- to_maximize (bool)  
  - false: 最小化問題（条件を満たす最小の値を返す）  
  - true: 最大化問題（条件を満たす最大の値を返す）

- lower (T) / upper (T)  
  探索範囲の下限・上限（閉区間／半開区間の扱いは実装に依存）。

- f (F)  
  判定関数。引数 mid に対して条件を満たすなら true、満たさないなら false を返す。必ず単調性を満たすこと。

- step_num (int, optional)  
  T が浮動小数点型の場合の反復回数。デフォルトは 200。必要に応じて増やして精度を上げてください。

## 注意点

- f の単調性は必須です。単調でない場合は正しい答えが得られません。  
- 浮動小数点探索では反復回数により精度が決まるため、必要十分な反復回数を設定してください。  
- 境界条件（lower/upper が解を含むかどうか）に注意して実装を使用してください。

## 計算量

- 各判定 f(mid) の計算時間に依存しますが、整数の場合は O(log(range))、浮動小数点では指定した反復回数に比例します。


## 問題例 (ネタバレ注意)

https://atcoder.jp/contests/abc374/tasks/abc374_e


## 参考

https://rsk0315.hatenablog.com/entry/2024/08/04/185219