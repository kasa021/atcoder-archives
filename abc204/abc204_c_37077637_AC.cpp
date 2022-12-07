/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/37077637
 * Submitted at: 2022-12-07 11:45:00
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_c
 * Result: AC
 * Execution Time: 65 ms
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
vector<bool> seen(2009,false);
void dfs(int v){
   seen[v]=true;
   ans++;
   for(auto nv:g[v]){
       if(seen[nv]) continue;
       dfs(nv);
   }
}
int main(){
    cin>>n>>m;
    rep(i,m){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
    }
    rep1(i,1,n+1){
        rep(i,n+9) seen[i]=false;
        dfs(i); 
    }
    cout<< ans << endl;
    }
