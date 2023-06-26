/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42973985
 * Submitted at: 2023-06-26 05:26:24
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_z
 * Result: AC
 * Execution Time: 88 ms
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
  int n;
  cin>>n;
  graph g(n);
  rep(i,n-1){
    int a,b;
    cin>>a>>b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<bool> seen(n,false);
  vector<bool> color(n,false);
  seen[0]=true;
  queue<int> que;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv:g[v]){
      if(seen[nv])continue;
      seen[nv]=true;
      color[nv]=!color[v];
      que.push(nv);
    }
  }
  int w_cnt=0,b_cnt=0;
  rep(i,n){
    if(color[i])w_cnt++;
    else b_cnt++;
  }
  // cout << w_cnt << " " << b_cnt << endl;
  if(w_cnt>b_cnt){
    int now = 0;
    rep(i,n){
      if(color[i]){
        cout<<i+1<<" ";
        now++;
        if(now>=n/2)break;
      }
    }
  }else {
    int now = 0;
    rep(i,n){
      if(!color[i]){
        cout<<i+1<<" ";
        now++;
        if(now>=n/2)break;
      }
    }
  }
  cout<<endl;
}