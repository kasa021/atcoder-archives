/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35146479
 * Submitted at: 2022-09-24 17:54:05
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_c
 * Result: AC
 * Execution Time: 171 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int n,x,y;
graph g(200009);
vector<bool> seen(200009,false);
vector<int> pre(200009,-1);
vector<int> ans;

void dfs(int v){
  seen[v]=true;

  for(auto nv:g[v]){
    if(seen[nv]) continue;

    pre[nv]=v;//nvがどこから辿られてきたのかを記録
    dfs(nv);
  }
}

int main(){
      cin>>n>>x>>y;
      //graph g(n+1);
      rep(i,n-1){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }

      dfs(x);
      int now=y;
      while(now!=-1){
        ans.push_back(now);
        now=pre[now];
      }

      reverse(all(ans));
      rep(i,(int)ans.size()) cout<< ans[i] << " ";
      cout<<endl;

    }