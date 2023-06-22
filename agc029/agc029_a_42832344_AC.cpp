/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc029/submissions/42832344
 * Submitted at: 2023-06-22 14:56:03
 * Problem URL: https://atcoder.jp/contests/agc029/tasks/agc029_a
 * Result: AC
 * Execution Time: 22 ms
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
  string s;
  cin >> s;
  ll ans = 0, cnt_b = 0;
  rep(i,s.size()){
    if(s[i] == 'B') cnt_b++;
    else ans += cnt_b;
  }
  cout << ans << endl;
}