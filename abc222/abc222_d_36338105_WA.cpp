/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/36338105
 * Submitted at: 2022-11-09 05:39:40
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_d
 * Result: WA
 * Execution Time: 81 ms
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

const ll mod=998244353;

int main(){
      ll n;
      cin>>n;
      vector<ll> a(n),b(n);
      rep(i,n)cin>>a[i];
      rep(i,n) cin>>b[i];
      vector<vector<ll>> dp(3009,vector<ll>(3009,0));
      rep1(i,a[0],b[0]+1) dp[0][i]=1;
      rep1(i,1,n){
        ll sum=0;
        rep1(j,a[i-1],a[i]){
            sum+=dp[i-1][j];
            sum%=mod;
        }
        //cout<<"sum"<< sum << endl;
        rep1(j,a[i],b[i]+1){
           dp[i][j]=sum+dp[i-1][j];
           dp[i][j]%=mod;
           sum+=dp[i-1][j];
           sum%=mod;
        }
      }
      ll ans=0;
      rep(i,3000){
        ans+=dp[n-1][i];
        ans%=mod;
      }
      cout<< ans << endl;
    //   rep(i,2){
    //     rep(j,4){
    //         cout<<dp[i][j]<<" ";
    //     }cout<<endl;
    //   }
    }