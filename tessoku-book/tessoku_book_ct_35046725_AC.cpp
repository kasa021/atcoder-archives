/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35046725
 * Submitted at: 2022-09-22 10:32:58
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ct
 * Result: AC
 * Execution Time: 19 ms
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
      string s;
      cin>>n>>s;
      int dp[1009][1009];
      rep(i,n) dp[i][i]=1;
      rep(i,n-1){
        if(s[i]==s[i+1]) dp[i][i+1]=2;
        else dp[i][i+1]=1;
      }

      rep1(len,2,n){
        rep(l,n-len){
            int r=l+len;
            if(s[l]==s[r]) dp[l][r]=max({dp[l][r-1],dp[l+1][r],dp[l+1][r-1]+2});
            else dp[l][r]=max(dp[l][r-1],dp[l+1][r]);
        }
      }
      cout<< dp[0][n-1] << endl;

    }