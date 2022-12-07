/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/37077511
 * Submitted at: 2022-12-07 11:39:30
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_c
 * Result: WA
 * Execution Time: 2205 ms
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

int n,m,ans=0;
graph g(2009);

void dfs(int v,vector<bool> seen){
   seen[v]=true;
   ans++;
   for(auto nv:g[v]){
       if(seen[nv]) continue;
       dfs(nv,seen);
   }
}
int main(){
    cin>>n>>m;
    rep(i,m){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
    }
    vector<bool> seen(2009,false);
    rep1(i,1,n+1) dfs(i,seen);
    cout<< ans << endl;
    }
