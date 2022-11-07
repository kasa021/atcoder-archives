/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc063/submissions/36306995
 * Submitted at: 2022-11-07 12:30:06
 * Problem URL: https://atcoder.jp/contests/abc063/tasks/arc075_a
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
      int n;
      vector<int> s(109);
      cin>>n;
      rep(i,n) cin>>s[i];
      vector<vector<bool>> dp(109,vector<bool>(10009,false));
      rep(i,n)dp[i][0]=true;
      rep(i,n){
        rep(j,10001){
            if(dp[i][j]) {
                dp[i+1][j]=true;
                dp[i+1][j+s[i]]=true;
                //cout<< j+s[i] << endl;
            }
        }
      }
      
      for(int i=10;i<10001;i+=10){
        dp[n][i]=false;
      }
      for(int i=10000;i>=0;i--){
        if(dp[n][i]){
            cout<< i << endl;
            return 0;
        }
      }
      //cout<< "0" << endl;
    }