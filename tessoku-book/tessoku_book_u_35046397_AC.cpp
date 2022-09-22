/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35046397
 * Submitted at: 2022-09-22 10:02:53
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_u
 * Result: AC
 * Execution Time: 43 ms
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
      vector<int> p(2009),a(2009);
      vector<vector<int>> dp(2009,vector<int> (2009));
      rep1(i,1,n+1) cin>>p[i]>>a[i];
      dp[1][n]=0;
      for(int len=n-2;len>=0;len--){
        for(int l=1;l<=n-len;l++){
            int r=l+len;
            int score1=0;
            if(l<=p[l-1]&&p[l-1]<=r) score1=a[l-1];
            int score2=0;
            if(l<=p[r+1]&&p[r+1]<=r)score2=a[r+1];

            if(l==1){
                dp[l][r]=dp[l][r+1]+score2;
            }else if(r==n){
                dp[l][r]=dp[l-1][r]+score1;
            }else dp[l][r]=max(dp[l-1][r]+score1,dp[l][r+1]+score2);
        }
      }
      int ans=0;
      rep1(i,1,n+1) ans=max(ans,dp[i][i]);
      cout<< ans << endl;
      return 0;
    }
