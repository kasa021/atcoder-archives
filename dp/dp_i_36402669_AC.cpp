/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36402669
 * Submitted at: 2022-11-12 09:43:28
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_i
 * Result: AC
 * Execution Time: 62 ms
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


int main(){
  int n;
  cin>>n;
  vector<double> p(n);
  rep(i,n) cin>>p[i];
  vector<vector<double>> dp(n+9,vector<double>(n+9,0));
  dp[0][0]=1;
  rep1(i,1,n+1)rep(j,i+1){
    if(j>0) dp[i][j]=dp[i-1][j]*(1-p[i-1])+dp[i-1][j-1]*p[i-1];
    else dp[i][j]=dp[i-1][j]*(1-p[i-1]);
    //cout<< dp[i][j] << endl;
  }
  double ans=0;
  rep1(i,n/2+1,n+1)ans+=dp[n][i];//cout<< dp[n][i] << " ";
  //cout<<endl;
  cout<<fixed<<setprecision(10)<<ans<<endl;
  }