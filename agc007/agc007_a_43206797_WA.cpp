/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc007/submissions/43206797
 * Submitted at: 2023-07-02 18:21:09
 * Problem URL: https://atcoder.jp/contests/agc007/tasks/agc007_a
 * Result: WA
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

vector<int> mx = {1,0};
vector<int> my = {0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<bool>> visited(h, vector<bool>(w, false));
  vector<vector<int>> dist(h, vector<int>(w, -1));
  queue<P> que;
  que.push({0, 0});
  visited[0][0] = true;
  dist[0][0] = 0;
  while(!que.empty()){
    auto [x,y] = que.front();
    que.pop();
    rep(i,2){
      int nx = x + mx[i];
      int ny = y + my[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if(s[nx][ny] == '.') continue;
      if(visited[nx][ny]) continue;
      que.push({nx,ny});
      visited[nx][ny] = true;
      dist[nx][ny] = dist[x][y] + 1;
    }
  }
  bool ok = true;
  set<int> st;
  rep(i,h)rep(j,w){
    int size = st.size();
    if(s[i][j] == '#'){
      st.insert(dist[i][j]);
      // cout<<i<<" "<<j<<" "<<dist[i][j]<<endl;
      if (st.size() == size) ok = false;
    }
  }
  if(!ok || dist[h-1][w-1] == -1) cout << "Impossible" << endl;
  else cout << "Possible" << endl;
}
