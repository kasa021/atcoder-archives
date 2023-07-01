/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43132386
 * Submitted at: 2023-07-01 12:58:48
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_d
 * Result: TLE
 * Execution Time: 2230 ms
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
  string snuke="snuke";
  queue<T> que;
  que.push(make_tuple(0, 0, 0));
  bool flag = false;
  vector<vector<bool>> ok(h, vector<bool>(w, false));
  
  while(!que.empty()){
    int x, y, snuke_index;
    tie(x, y, snuke_index) = que.front();
    ok[x][y] = true;
    que.pop();
    rep(i,4){
      int nx = x + mx[i];
      int ny = y + my[i];
      if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if(s[nx][ny] != snuke[(snuke_index+1)%5]) continue;
      if(nx == h-1 && ny == w-1){
        ok[nx][ny] = true;
        flag = true;
        break;
      }
      if(ok[nx][ny]) continue;
      que.push(make_tuple(nx, ny, (snuke_index+1)%5));
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  // rep(i, h){
  //   rep(j, w){
  //     cout << ok[i][j] << " ";
  //   }
  //   cout << endl;
  // }

}