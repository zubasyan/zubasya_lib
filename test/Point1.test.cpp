#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1100"
#include <bits/stdc++.h>
using namespace std;
#include "./../lib/geom/Point.hpp"

int solve() {
  int N;
  cin >> N;
  if (N == 0) return 0;
  vector<zbs::Point<int>> ps(N);
  for (int i = 0; i < N; i++) {
    cin >> ps[i].x >> ps[i].y;
  }

  int cross_sum = 0;
  for (int i = 0; i < N; i++) {
    cross_sum += ps[i].cross(ps[(i + 1) % N]);
  }
  double ans = abs(double(cross_sum) / 2e0);
  static int set_num = 0;
  set_num++;

  printf("%d %.1lf\n", set_num, ans);
  return 1;
}
int main() {
  while (solve());
  return 0;
}