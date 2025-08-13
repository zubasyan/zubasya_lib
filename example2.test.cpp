#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) std::begin(x), std::end(x)
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> s(n);
  REP(i, n) { cin >> s[i]; }
  sort(ALL(s));
  int q;
  cin >> q;
  int cnt = 0;
  // cerr << " gg" << endl;
  vector<int> t(q);
  REP(i, q) cin >> t[i];
  REP(i, q) { cnt += binary_search(ALL(s), t[i]); }
  cout << cnt << endl;
  return 0;
}