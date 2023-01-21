/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc286/submissions/38213132
 * Submitted at: 2023-01-21 12:46:37
 * Problem URL: https://atcoder.jp/contests/abc286/tasks/abc286_d
 * Result: AC
 * Execution Time: 39 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];
    vector<vector<bool>> dp(100,vector<bool>(10009,false));
    rep(i,n) dp[i][0]=true;
    rep(i,n){
        rep(j,x+9){
            if(dp[i][j]){
                dp[i+1][j]=true;
                int m=a[i];
                rep(k,b[i]){
                    if(j+m<=x){
                        dp[i+1][j+m]=true;
                        m+=a[i];
                    }
                }
            }
        }
    }
    cout << (dp[n][x] ? "Yes" : "No") << endl;
    }
