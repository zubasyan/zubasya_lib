---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/Point1.test.cpp
    title: test/Point1.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://github.com/kth-competitive-programming/kactl/blob/main/content/geometry/Point.h
  bundledCode: "#line 2 \"lib/geom/Point.hpp\"\n// ref\n// https://github.com/kth-competitive-programming/kactl/blob/main/content/geometry/Point.h\n\
    \n#include <tuple>\n\nnamespace zbs {\nusing namespace std;\ntemplate <class T>\n\
    inline int sign(T x) {\n  return (x > 0) - (x < 0);\n}\n\ntemplate <class T>\n\
    struct Point {\n  T x, y;\n  explicit Point(T x = 0, T y = 0) : x(x), y(y) {}\n\
    \  bool operator<(Point p) const { return tie(x, y) < tie(p.x, p.y); }\n  bool\
    \ operator>(Point p) const { return tie(x, y) == tie(p.x, p.y); }\n  Point operator+(Point\
    \ p) const { return Point(x + p.x, y + p.y); }\n  Point operator-(Point p) const\
    \ { return Point(x - p.x, y - p.y); }\n  Point operator*(T d) const { return Point(x\
    \ * d, y * d); }\n  Point operator/(T d) const { return Point(x / d, y / d); }\n\
    \n  T dot(Point p) const { return x * p.x + y * p.y; }\n  T cross(Point p) const\
    \ { return x * p.y - y * p.x; }\n  T cross(Point a, Point b) const { return (a\
    \ - *this).cross(b - *this); }\n  T dist2() const { return x * x + y * y; }\n\
    \  double dist() const { return sqrt(double(dist2())); }\n  double angle() const\
    \ { return atan2(y, x); }\n  Point unit() const { return *this / dist(); }\n \
    \ Point perp() const { return Point(-y, x); }\n  Point normal() const { return\
    \ perp().unit(); }\n  Point rotate(double a) const {\n    return Point(x * cos(a)\
    \ - y * sin(a), x * sin(a) + y * cos(a));\n  }\n  friend ostream &operator<<(ostream\
    \ &os, Point p) {\n    return os << \"(\" << p.x << \",\" << p.y << \")\";\n \
    \ }\n};\n\n}  // namespace zbs\n"
  code: "#pragma once\n// ref\n// https://github.com/kth-competitive-programming/kactl/blob/main/content/geometry/Point.h\n\
    \n#include <tuple>\n\nnamespace zbs {\nusing namespace std;\ntemplate <class T>\n\
    inline int sign(T x) {\n  return (x > 0) - (x < 0);\n}\n\ntemplate <class T>\n\
    struct Point {\n  T x, y;\n  explicit Point(T x = 0, T y = 0) : x(x), y(y) {}\n\
    \  bool operator<(Point p) const { return tie(x, y) < tie(p.x, p.y); }\n  bool\
    \ operator>(Point p) const { return tie(x, y) == tie(p.x, p.y); }\n  Point operator+(Point\
    \ p) const { return Point(x + p.x, y + p.y); }\n  Point operator-(Point p) const\
    \ { return Point(x - p.x, y - p.y); }\n  Point operator*(T d) const { return Point(x\
    \ * d, y * d); }\n  Point operator/(T d) const { return Point(x / d, y / d); }\n\
    \n  T dot(Point p) const { return x * p.x + y * p.y; }\n  T cross(Point p) const\
    \ { return x * p.y - y * p.x; }\n  T cross(Point a, Point b) const { return (a\
    \ - *this).cross(b - *this); }\n  T dist2() const { return x * x + y * y; }\n\
    \  double dist() const { return sqrt(double(dist2())); }\n  double angle() const\
    \ { return atan2(y, x); }\n  Point unit() const { return *this / dist(); }\n \
    \ Point perp() const { return Point(-y, x); }\n  Point normal() const { return\
    \ perp().unit(); }\n  Point rotate(double a) const {\n    return Point(x * cos(a)\
    \ - y * sin(a), x * sin(a) + y * cos(a));\n  }\n  friend ostream &operator<<(ostream\
    \ &os, Point p) {\n    return os << \"(\" << p.x << \",\" << p.y << \")\";\n \
    \ }\n};\n\n}  // namespace zbs"
  dependsOn: []
  isVerificationFile: false
  path: lib/geom/Point.hpp
  requiredBy: []
  timestamp: '2025-08-20 17:28:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/Point1.test.cpp
documentation_of: lib/geom/Point.hpp
layout: document
title: Point
---

# Point (二次元座標 ベクトル)

二次元の座標を扱う構造体

# 使用例

内積

```cpp
Point<int> a(1, 2), b(3, 4);
int dot = a.dot(b);
```

外積

```cpp
Point<int> a(1, 2), b(3, 4);
int cross = a.cross(b);
```

外積 3点 b<-a->c とみたときの外積

```cpp
Point<int> a(1, 2), b(3, 4), c(
5, 6);
int cross3 = a.cross(b, c);
```

偏角

```cpp
Point<double> p(1.0, 1.0);
double angle = p.angle();
```

正規化

```cpp
Point<double> p(3.0, 4.0);
p.unit(); // 長さが1のベクトルに変換
```

直交ベクトル

```cpp
Point<double> p(1.0, 0.0);
p.perp();
```

単位法線ベクトル

```cpp
Point<double> p(1.0, 0.0);
p.normal();
```
