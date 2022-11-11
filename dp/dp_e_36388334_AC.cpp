/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36388334
 * Submitted at: 2022-11-11 15:27:08
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_e
 * Result: AC
 * Execution Time: 77 ms
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
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;

int main(){
      ll n,m;
      cin>>n>>m;
      vector<ll> w(n),v(n);
      rep(i,n)cin>>w[i]>>v[i];
      vector<vector<ll>> dp(n+9,vector<ll>(100009,INT_MAX));
      dp[0][0]=0;
      rep1(i,1,n+1){
        rep(j,100001){
          if(j-v[i-1]>=0) dp[i][j]=min(dp[i-1][j],dp[i-1][j-v[i-1]]+w[i-1]);
          else dp[i][j]=dp[i-1][j];
        }
      }
      ll ans=100000;
      while(dp[n][ans]>m) ans--;
      cout<< ans << endl;
    }