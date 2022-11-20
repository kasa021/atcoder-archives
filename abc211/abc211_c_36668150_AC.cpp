/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/36668150
 * Submitted at: 2022-11-20 11:04:50
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_c
 * Result: AC
 * Execution Time: 26 ms
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

int main() {
    string s,t="chokudai";
    int mod=1e9+7;
    cin>>s;
    int size=s.size();
    vector<vector<ll>> dp(size+1,vector<ll> (9,0));
    if(s[0]=='c')dp[0][0]=1;
    rep1(i,1,size){
        rep(j,9){
            dp[i][j]=dp[i-1][j];
            if(s[i]==t[j]){
                if(s[i]=='c') dp[i][j]++,dp[i][j]%=mod;
                else {
                    dp[i][j]+=dp[i-1][j-1];
                    dp[i][j]%=mod;
                }
            }
        }
    }
    cout<< dp[size-1][7] << endl;
    // rep(i,size){
    //     rep(j,9){
    //         cout<< dp[i][j] << " ";
    //     }cout<<endl;
    // }
}