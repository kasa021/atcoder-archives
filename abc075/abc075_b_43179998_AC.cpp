/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc075/submissions/43179998
 * Submitted at: 2023-07-02 08:59:31
 * Problem URL: https://atcoder.jp/contests/abc075/tasks/abc075_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

vector<int> mx = { 1, 0, -1, 0, 1, 1, -1, -1 };
vector<int> my = { 0, 1, 0, -1, 1, -1, 1, -1 };

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') continue;
      int cnt = 0;
      rep(k, 8) {
        int nx = i + mx[k], ny = j + my[k];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (s[nx][ny] == '#') cnt++;
      }
      s[i][j] = cnt + '0';
    }
  }
  rep(i, h) cout << s[i] << endl;

  return 0;
}
