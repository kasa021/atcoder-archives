/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43144861
 * Submitted at: 2023-07-01 13:28:12
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_d
 * Result: AC
 * Execution Time: 38 ms
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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  string snuke = "snuke";

  queue<P> que;
  if(s[0][0] == 's') que.push({0,0});
  vector<vector<bool>> seen(h, vector<bool>(w, false));
  seen[0][0] = true;
  while(!que.empty()) {
    auto [x, y] = que.front();
    que.pop();
    rep(i, 4) {
      int nx = x + mx[i];
      int ny = y + my[i];
      if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if(seen[nx][ny]) continue;
      int idx1 = snuke.find(s[nx][ny]);
      int idx2 = snuke.find(s[x][y]);
      if(idx1 == -1 || idx2 == -1) continue;
      if((idx2+1)%5 == idx1) {
        seen[nx][ny] = true;
        que.push({nx, ny});
      }
    }
  }
  
  if(seen[h-1][w-1]) cout << "Yes" << endl;
  else cout << "No" << endl;

}