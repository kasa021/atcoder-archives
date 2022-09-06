/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/34652071
 * Submitted at: 2022-09-06 08:15:14
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_c
 * Result: AC
 * Execution Time: 133 ms
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
      ll a=998244353;
      vector<vector<ll>> dp(n+1,vector<ll>(10,0));
      rep1(i,1,10) dp[1][i]=1;
     // rep(i,10) cout<<dp[0][i];
      //cout<<endl;
      rep1(i,2,n+1){
        rep1(j,1,10){
            dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%a;
            if(j!=9) dp[i][j]+=dp[i-1][j+1];
            dp[i][j]%=a;
            //cout<< dp[i][j] <<" ";
        }
        //cout<<endl;
      }
      ll ans=0;
      rep1(i,1,10){
        
        ans+=dp[n][i];
        ans%=a;
      }
      cout<< ans << endl;
    }