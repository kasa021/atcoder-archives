/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/35044094
 * Submitted at: 2022-09-22 07:37:27
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_c
 * Result: AC
 * Execution Time: 115 ms
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
      int n,k;
      cin>>n>>k;
      vector<int> a(n),b(n);
      rep(i,n) cin>>a[i];
      rep(i,n) cin>>b[i];
      vector<vector<bool>> dp(2,vector<bool>(n+10,false));
      dp[0][0]=true;dp[1][0]=true;
      rep1(i,1,n){
        if(dp[0][i-1]){
            if(abs(a[i-1]-a[i])<=k) dp[0][i]=true;
            if(abs(a[i-1]-b[i])<=k) dp[1][i]=true;
        }
        if(dp[1][i-1]){
            if(abs(b[i-1]-a[i])<=k) dp[0][i]=true;
            if(abs(b[i-1]-b[i])<=k) dp[1][i]=true;
        }

      }
      if(dp[0][n-1]||dp[1][n-1]) cout<< "Yes" << endl;
      else cout<< "No" << endl;
      return 0;
    }