/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc103/submissions/43067720
 * Submitted at: 2023-06-30 12:26:56
 * Problem URL: https://atcoder.jp/contests/abc103/tasks/abc103_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  string s, t;
  cin >> s >> t;
  bool ok = false;
  rep(i,s.size()){
    if(s == t){
      ok = true;
      break;
    }
    char c = s.back();
    s.pop_back();
    s = c + s;
  }
  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
}
