/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43388826
 * Submitted at: 2023-07-08 13:38:24
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_d
 * Result: AC
 * Execution Time: 278 ms
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

int main() {
  int n1, n2, m;
  cin>>n1>>n2>>m;
  graph g(n1+n2);
  rep(i,m){
    int a, b;
    cin>>a>>b;
    --a;--b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> dist1(n1, -1);
  vector<int> dist2(n1+n2+1, -1);
  dist1[0]=0;
  dist2[n1+n2-1] = 0;

  queue<int> que;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv:g[v]){
      if(dist1[nv]!=-1) continue;
      dist1[nv]=dist1[v]+1;
      que.push(nv);
    }
  }

  que.push(n1+n2-1);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv:g[v]){
      if(dist2[nv]!=-1) continue;
      dist2[nv]=dist2[v]+1;
      que.push(nv);
    }
  }

  int d1 = 0;
  rep(i,n1){
    d1=max(d1, dist1[i]);
  }
  int d2 = 0;
  rep(i,n1+n2){
    d2=max(d2, dist2[i]);
  }

  cout<<d1+d2+1<<endl;
}
