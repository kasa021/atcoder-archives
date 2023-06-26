/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42972754
 * Submitted at: 2023-06-26 04:25:14
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_l
 * Result: AC
 * Execution Time: 229 ms
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

vector<int> mx = {1,0,-1,0};
vector<int> my = {0,1,0,-1};

int main() {
  int h, w, q;
  cin >> h >> w >> q;
  vector<vector<bool>> grid(h, vector<bool>(w, false));
  dsu d(h * w);
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int r, c;
      cin >> r >> c;
      r--;
      c--;
      grid[r][c] = true;
      int v = r * w + c;
      rep(j,4){
        int nx = r + mx[j];
        int ny = c + my[j];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (grid[nx][ny]) d.merge(v, nx * w + ny);
      }
    }else {
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      ra--;
      ca--;
      rb--;
      cb--;
      if (grid[ra][ca] && grid[rb][cb] && d.same(ra * w + ca, rb * w + cb)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}