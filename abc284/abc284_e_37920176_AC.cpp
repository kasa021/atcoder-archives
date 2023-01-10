/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37920176
 * Submitted at: 2023-01-10 07:16:27
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_e
 * Result: AC
 * Execution Time: 182 ms
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
//typedef modint1000000007 mint;


int ans=0;
int inf=1e6;
void dfs(int v,vector<bool>& seen,vector<vector<int>>& g){
    if(ans==inf) return;
    ans++;
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        dfs(nv,seen,g);
    }
    seen[v]=false;
}


int main(){
    int n,m;
    cin>>n>>m;
    graph g(n+1);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      a--,b--;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    vector<bool> seen(n+9,false);
    dfs(0,seen,g);
    cout<< ans << endl;
    }
