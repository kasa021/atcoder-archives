/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/37273815
 * Submitted at: 2022-12-14 15:38:39
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_d
 * Result: AC
 * Execution Time: 54 ms
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
typedef modint998244353 mint;
int main(){
    int n;
    cin>>n;
    vector<int> a(30000),b(30000);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];

    vector<vector<mint>> dp(3009,vector<mint>(3009,0));
    dp[0][0]=1;
    rep(i,n+1){
      rep(j,3000) dp[i][j+1]+=dp[i][j];
      if(i!=n){
        rep1(j,a[i],b[i]+1) dp[i+1][j]+=dp[i][j];
      }
    }
    cout<< dp[n][3000].val() << endl;
    }
