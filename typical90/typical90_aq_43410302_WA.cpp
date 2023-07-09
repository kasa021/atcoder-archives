/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43410302
 * Submitted at: 2023-07-09 07:09:51
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_aq
 * Result: WA
 * Execution Time: 539 ms
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

struct info {
  int count;
  int direction;
};

vector<int> mx = {1,0,-1,0};
vector<int> my = {0,1,0,-1};

int main() {
  int h, w;
  cin >> h >> w;
  int rs, cs, rt, ct;
  cin >> rs >> cs >> rt >> ct;
  rs--; cs--; rt--; ct--;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  vector<vector<info>> dist(h, vector<info>(w, {(int)1e9, -1}));
  dist[rs][cs] = {0, -1};
  queue<P> que;
  que.push({rs, cs});
  while(!que.empty()){
    auto [r,c] = que.front();
    que.pop();
    int d = dist[r][c].count;
    int dir = dist[r][c].direction;

    rep(i,4){
      int nr = r + my[i];
      int nc = c + mx[i];
      if(nr<0 || nr>=h || nc<0 || nc>=w) continue;
      if(s[nr][nc]=='#') continue;
      if(dist[nr][nc].count<=d) continue;
      if(dir==i) dist[nr][nc] = {d, i};
      else dist[nr][nc] = {d+1, i};
      que.push({nr, nc});
    }
  }

  cout << dist[rt][ct].count-1 << endl;
}
