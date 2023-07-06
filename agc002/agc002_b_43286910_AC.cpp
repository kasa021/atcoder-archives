/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc002/submissions/43286910
 * Submitted at: 2023-07-06 06:00:58
 * Problem URL: https://atcoder.jp/contests/agc002/tasks/agc002_b
 * Result: AC
 * Execution Time: 54 ms
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
  int n, m;
  cin>>n>>m;
  vector<int> cnt(n, 1);
  vector<bool> red(n, false);
  red[0] = true;
  rep(i,m){
    int x, y;
    cin >> x >> y;
    x--, y--;
    if (red[x]) red[y] = true;
    cnt[x]--;
    cnt[y]++;
    if (cnt[x] == 0) red[x] = false;
  }
  int ans = 0;
  rep(i,n){
    if(red[i]) ans++;
  }
  cout << ans << endl;
}