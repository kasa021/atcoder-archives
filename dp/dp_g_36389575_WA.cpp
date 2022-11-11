/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36389575
 * Submitted at: 2022-11-11 16:57:43
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_g
 * Result: WA
 * Execution Time: 81 ms
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


void dfs(int v,vector<vector<int>> &g,vector<bool> &seen,vector<int> &order){//トポロジカルソート
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        dfs(nv,g,seen,order);
    }
    order.push_back(v);
    return;
}

int dfs2(int v,vector<int> &dp,vector<vector<int>> &g,vector<bool> &f){
    if(f[v]) return dp[v];
    f[v]=true;
    int now=0;
    for(auto nv:g[v]){
        now=max(now,dfs2(nv,dp,g,f)+1);
    }
    return dp[v]=now;
}


int main(){
    int n,m;
    cin>>n>>m;
    graph g(n+1);
    rep(i,n){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      //g[b].push_back(a);
    }
    rep(i,n) sort(all(g[i]));
    vector<bool> seen(n+9,false);
    vector<int> order;
    rep1(i,1,n){
        if(seen[i]) continue;
        dfs(i,g,seen,order);
    }
    // reverse(all(order));
    // for(auto v:order) cout<<v<<" ";
    // cout<<endl;
    vector<int> dp(n+1,0);
    vector<bool> f(n+1,false);
    int ans=0;
    for(int v:order){
        ans=max(ans,dfs2(v,dp,g,f));
    }
    cout<< ans << endl;
    }