/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc075/submissions/37927545
 * Submitted at: 2023-01-10 14:14:19
 * Problem URL: https://atcoder.jp/contests/abc075/tasks/abc075_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
void dfs(int v,vector<vector<int>>& g,vector<bool>& seen){
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        dfs(nv,g,seen);
    }
}
int main(){
      int n,m,ans=0;
      cin>>n>>m;
      vector<int> a(m),b(m);
      rep(i,m){
        cin>>a[i]>>b[i];
        a[i]--,b[i]--;
      }
      rep(i,m){
        graph g(n+9);
        vector<bool> seen(n+9,false);
        rep(j,m){
            if(i==j) continue;
            g[a[j]].push_back(b[j]);
            g[b[j]].push_back(a[j]);
        }
        dfs(0,g,seen);
        bool f=true;
        rep(i,n){
            if(!seen[i]) f=false;
        }
        if(!f) ans++;
      }
      cout<< ans << endl;
    }
