---
title: Point
documentation_of: ./Point.hpp
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
