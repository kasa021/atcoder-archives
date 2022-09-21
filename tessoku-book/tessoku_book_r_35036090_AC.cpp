/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35036090
 * Submitted at: 2022-09-21 15:22:38
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_r
 * Result: AC
 * Execution Time: 7 ms
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
      int n,s;
      cin>>n>>s;
      vector<int> a(69);
      rep1(i,1,n+1) cin>>a[i];
      vector<vector<bool>> dp(69,vector<bool>(10009,false));
      dp[0][0]=true;
      rep1(i,1,n+1){
        rep(j,s+1){
            if(j<a[i]){
                if(dp[i-1][j]==true) dp[i][j]=true;
            }
            if(j>=a[i]){
                if(dp[i-1][j]==true||dp[i-1][j-a[i]]==true) dp[i][j]=true;
            }
        }
      }
      if(dp[n][s])cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }