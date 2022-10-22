/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/35860814
 * Submitted at: 2022-10-22 11:31:51
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_d
 * Result: AC
 * Execution Time: 60 ms
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
//using mint=modint998244353;
int mod = 998244353;
int main(){
      int n;
      cin>>n;
      vector<ll> a(100009);
      rep(i,n) cin>>a[i];
      vector<vector<ll>> dp(10,vector<ll> (100009,0));
      dp[a[0]][0]=1;
      rep1(i,1,n){
        rep(j,10){
            dp[(j+a[i])%10][i]+=dp[j][i-1];
            dp[(j+a[i])%10][i]%=mod;
            dp[(j*a[i])%10][i]+=dp[j][i-1];
            dp[(j*a[i])%10][i]%=mod;
        }
      }
      rep(i,10){
        cout<< dp[i][n-1] << endl;
      }
    //   rep(i,10){
    //     rep(j,3){
    //         cout<< dp[i][j] << " ";
    //     }
    //     cout<<endl;
    //   }
    }
