/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/37307238
 * Submitted at: 2022-12-16 16:03:38
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_d
 * Result: AC
 * Execution Time: 34 ms
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
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll> a(n+9);
  vector<vector<ll>> dp(2009,vector<ll>(2009,-100000000000ll));
  rep(i,n+1) cin>>a[i];
  dp[0][0]=0;
  rep1(i,1,n+1){
    rep(j,m+1){
      if(i<j) continue;
      if(j==0) dp[i][0]=0;
      else dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]+j*a[i-1]);
    }
  }
  cout<< dp[n][m] << endl;
  }
