/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36384290
 * Submitted at: 2022-11-11 12:23:59
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_c
 * Result: AC
 * Execution Time: 68 ms
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
      vector<int> a(n),b(n),c(n);
      rep(i,n)cin>>a[i]>>b[i]>>c[i];
      vector<vector<int>> dp(n+9,vector<int>(3,0));
      dp[0][0]=a[0],dp[0][1]=b[0],dp[0][2]=c[0];
      rep1(i,1,n){
        rep(j,3){
            if(j==0){
                dp[i][j]=max(dp[i-1][j+1]+a[i],dp[i-1][j+2]+a[i]);
            }else if(j==1){
                dp[i][j]=max(dp[i-1][j+1]+b[i],dp[i-1][j-1]+b[i]);
            }else {
                dp[i][j]=max(dp[i-1][j-1]+c[i],dp[i-1][j-2]+c[i]);
            }
        }
      }
      int ans=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
      cout<< ans << endl;
    }