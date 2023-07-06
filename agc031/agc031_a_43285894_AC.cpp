/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc031/submissions/43285894
 * Submitted at: 2023-07-06 05:02:56
 * Problem URL: https://atcoder.jp/contests/agc031/tasks/agc031_a
 * Result: AC
 * Execution Time: 9 ms
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
using mint = modint1000000007;  

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> alpha(26);
  rep(i,n) alpha[s[i]-'a']++;
  mint ans = 1;
  rep(i,26) ans *= alpha[i]+1;
  ans--;
  cout << ans.val() << endl;
}