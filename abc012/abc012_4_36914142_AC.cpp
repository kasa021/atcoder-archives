/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc012/submissions/36914142
 * Submitted at: 2022-12-01 12:16:58
 * Problem URL: https://atcoder.jp/contests/abc012/tasks/abc012_4
 * Result: AC
 * Execution Time: 48 ms
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
using graph=vector<vector<ll>>;

int main(){
      int n,m,a,b,c;
      cin>>n>>m;
     vector<vector<ll>> dist(n,vector<ll>(n,1e18));
     rep(i,n) dist[i][i]=0;
     rep(i,m){
        int a,b,t;
        cin>>a>>b>>t;
        a--;
        b--;
        dist[a][b]=dist[b][a]=t;
     }
     rep(k, n) rep(i, n) rep(j, n) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }
     ll ans=1e18;
     rep(i,n){
        ll mx=0;
        rep(j,n) mx=max(mx,dist[i][j]);
        ans=min(ans,mx);
     }
     cout<< ans << endl;
    }
