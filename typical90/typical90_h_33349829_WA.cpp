/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/33349829
 * Submitted at: 2022-07-18 19:32:12
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_h
 * Result: WA
 * Execution Time: 22 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define mod 1000000007
int main(){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll dp[100009][8];
dp[0][0] = 1;
      for(ll i=0;i<n;i++){
        for(ll j=0;j<=7;j++){
            dp[i + 1][j] += dp[i][j];
            if(s[i]=='a'&&j==0) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='t'&&j==1) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='c'&&j==2) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='o'&&j==3) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='d'&&j==4) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='e'&&j==5) dp[i + 1][j + 1] += dp[i][j];
            if(s[i]=='r'&&j==6) dp[i + 1][j + 1] += dp[i][j];
        }
        for (int j = 0; j <= 7; j++) dp[i + 1][j] %= mod;
      }
      cout<<dp[n][7]<<endl;
    }