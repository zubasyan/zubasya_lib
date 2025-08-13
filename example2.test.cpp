#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) std::begin(x), std::end(x)
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  cin >> n;
  unordered_set<int> s;
  REP(i, n) {
    int a;
    cin >> a;
    s.insert(a);
  }
  int q;
  cin >> q;
  int cnt = 0;
  vector<int> t(q);
  REP(i, q) cin >> t[i];
  REP(i, q) { cnt += s.count(t[i]); }
  cout << cnt << endl;
  return 0;
}