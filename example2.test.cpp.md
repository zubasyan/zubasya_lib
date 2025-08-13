---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"example2.test.cpp\"\n#define PROBLEM \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <vector>\n#define REP(i,\
    \ n) for (int i = 0; (i) < (int)(n); ++(i))\n#define ALL(x) std::begin(x), std::end(x)\n\
    using namespace std;\n\nint main() {\n  ios::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int n;\n  cin >> n;\n  vector<int> s(n);\n  REP(i, n) { cin >> s[i]; }\n  sort(ALL(s));\n\
    \  int q;\n  cin >> q;\n  int cnt = 0;\n  // cerr << \" gg\" << endl;\n  vector<int>\
    \ t(q);\n  REP(i, q) cin >> t[i];\n  REP(i, q) { cnt += binary_search(ALL(s),\
    \ t[i]); }\n  cout << cnt << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <vector>\n#define REP(i,\
    \ n) for (int i = 0; (i) < (int)(n); ++(i))\n#define ALL(x) std::begin(x), std::end(x)\n\
    using namespace std;\n\nint main() {\n  ios::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int n;\n  cin >> n;\n  vector<int> s(n);\n  REP(i, n) { cin >> s[i]; }\n  sort(ALL(s));\n\
    \  int q;\n  cin >> q;\n  int cnt = 0;\n  // cerr << \" gg\" << endl;\n  vector<int>\
    \ t(q);\n  REP(i, q) cin >> t[i];\n  REP(i, q) { cnt += binary_search(ALL(s),\
    \ t[i]); }\n  cout << cnt << endl;\n  return 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: example2.test.cpp
  requiredBy: []
  timestamp: '2025-08-13 22:25:00+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: example2.test.cpp
layout: document
redirect_from:
- /verify/example2.test.cpp
- /verify/example2.test.cpp.html
title: example2.test.cpp
---
