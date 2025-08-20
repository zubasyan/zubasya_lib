---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/geom/Point.hpp
    title: Point
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1100
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1100
  bundledCode: "#line 1 \"test/Point1.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1100\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#line 2 \"lib/geom/Point.hpp\"\
    \n// ref\n// https://github.com/kth-competitive-programming/kactl/blob/main/content/geometry/Point.h\n\
    \n#line 6 \"lib/geom/Point.hpp\"\n\nnamespace zbs {\nusing namespace std;\ntemplate\
    \ <class T>\ninline int sign(T x) {\n  return (x > 0) - (x < 0);\n}\n\ntemplate\
    \ <class T>\nstruct Point {\n  T x, y;\n  explicit Point(T x = 0, T y = 0) : x(x),\
    \ y(y) {}\n  bool operator<(Point p) const { return tie(x, y) < tie(p.x, p.y);\
    \ }\n  bool operator>(Point p) const { return tie(x, y) == tie(p.x, p.y); }\n\
    \  Point operator+(Point p) const { return Point(x + p.x, y + p.y); }\n  Point\
    \ operator-(Point p) const { return Point(x - p.x, y - p.y); }\n  Point operator*(T\
    \ d) const { return Point(x * d, y * d); }\n  Point operator/(T d) const { return\
    \ Point(x / d, y / d); }\n\n  T dot(Point p) const { return x * p.x + y * p.y;\
    \ }\n  T cross(Point p) const { return x * p.y - y * p.x; }\n  T cross(Point a,\
    \ Point b) const { return (a - *this).cross(b - *this); }\n  T dist2() const {\
    \ return x * x + y * y; }\n  double dist() const { return sqrt(double(dist2()));\
    \ }\n  double angle() const { return atan2(y, x); }\n  Point unit() const { return\
    \ *this / dist(); }\n  Point perp() const { return Point(-y, x); }\n  Point normal()\
    \ const { return perp().unit(); }\n  Point rotate(double a) const {\n    return\
    \ Point(x * cos(a) - y * sin(a), x * sin(a) + y * cos(a));\n  }\n  friend ostream\
    \ &operator<<(ostream &os, Point p) {\n    return os << \"(\" << p.x << \",\"\
    \ << p.y << \")\";\n  }\n};\n\n}  // namespace zbs\n#line 5 \"test/Point1.test.cpp\"\
    \n\nint solve() {\n  int N;\n  cin >> N;\n  if (N == 0) return 0;\n  vector<zbs::Point<int>>\
    \ ps(N);\n  for (int i = 0; i < N; i++) {\n    cin >> ps[i].x >> ps[i].y;\n  }\n\
    \n  int cross_sum = 0;\n  for (int i = 0; i < N; i++) {\n    cross_sum += ps[i].cross(ps[(i\
    \ + 1) % N]);\n  }\n  double ans = abs(double(cross_sum) / 2e0);\n  static int\
    \ set_num = 0;\n  set_num++;\n\n  printf(\"%d %.1lf\\n\", set_num, ans);\n  return\
    \ 1;\n}\nint main() {\n  while (solve());\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1100\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#include \"./../lib/geom/Point.hpp\"\
    \n\nint solve() {\n  int N;\n  cin >> N;\n  if (N == 0) return 0;\n  vector<zbs::Point<int>>\
    \ ps(N);\n  for (int i = 0; i < N; i++) {\n    cin >> ps[i].x >> ps[i].y;\n  }\n\
    \n  int cross_sum = 0;\n  for (int i = 0; i < N; i++) {\n    cross_sum += ps[i].cross(ps[(i\
    \ + 1) % N]);\n  }\n  double ans = abs(double(cross_sum) / 2e0);\n  static int\
    \ set_num = 0;\n  set_num++;\n\n  printf(\"%d %.1lf\\n\", set_num, ans);\n  return\
    \ 1;\n}\nint main() {\n  while (solve());\n  return 0;\n}"
  dependsOn:
  - lib/geom/Point.hpp
  isVerificationFile: true
  path: test/Point1.test.cpp
  requiredBy: []
  timestamp: '2025-08-20 17:28:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/Point1.test.cpp
layout: document
redirect_from:
- /verify/test/Point1.test.cpp
- /verify/test/Point1.test.cpp.html
title: test/Point1.test.cpp
---
