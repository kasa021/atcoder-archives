/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc091/submissions/43078529
 * Submitted at: 2023-07-01 05:05:38
 * Problem URL: https://atcoder.jp/contests/abc091/tasks/abc091_b
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
  }

  int m;
  cin >> m;
  rep(i, m) {
    string t;
    cin >> t;
    mp[t]--;
  }

  int ans = 0;
  for(auto p:mp){
    ans = max(ans, p.second);
  }
  cout << ans << endl;
}
