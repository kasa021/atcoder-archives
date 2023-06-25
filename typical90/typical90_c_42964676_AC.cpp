/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42964676
 * Submitted at: 2023-06-25 14:19:49
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_c
 * Result: AC
 * Execution Time: 81 ms
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

pair<int,vector<int>> dist(graph& g,int s){
  int n=g.size();
  vector<int> dist(n,-1);
  queue<int> que;
  dist[s]=0;
  que.push(s);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(int nv:g[v]){
      if(dist[nv]!=-1) continue;
      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }
  int maxv=0;
  int maxid=0;
  rep(i,n){
    if(dist[i]>maxv){
      maxv=dist[i];
      maxid=i;
    }
  }
  return make_pair(maxid,dist);
}

int main() {
  int n;
  cin >> n;
  graph g(n);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  auto p = dist(g, 0);
  auto q = dist(g, p.first);
  cout << q.second[q.first] + 1 << endl;
}