/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37919736
 * Submitted at: 2023-01-10 06:53:14
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_e
 * Result: AC
 * Execution Time: 173 ms
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

      const int mx=1e6;
      int ans=0;
      vector<bool> seen(n);
      auto dfs = [&](auto dfs,int v) -> void {
        if(ans == mx)return;
        ans++;
        seen[v]=true;
        for(int u: g[v]){
            if(seen[u]) continue;
            dfs(dfs,u);
        }
        seen[v]=false;
      };
      

      dfs(dfs,0);
      cout<< ans << endl;
    }
