/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35035964
 * Submitted at: 2022-09-21 15:14:22
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_r
 * Result: WA
 * Execution Time: 10 ms
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
      vector<int> a(n);
      rep(i,n) cin>>a[i]; 
      vector<vector<bool>> dp(69,vector<bool>(s+9,false));
      rep(i,69) dp[i][0]=true;
      rep1(i,1,n+2){
        rep(j,s+1){
            if(j>=a[i-1]&&dp[i-1][j-a[i-1]])  dp[i][j]=true;
        }
      }
      if(dp[n+1][s])cout<< "Yes" << endl;
      else cout<< "No" << endl;

      
    }
