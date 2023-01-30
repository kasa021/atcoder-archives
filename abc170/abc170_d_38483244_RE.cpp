/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/38483244
 * Submitted at: 2023-01-30 10:27:47
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_d
 * Result: RE
 * Execution Time: 2205 ms
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
    int n,amax=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    vector<bool> dp(100001,false);
    rep(i,n) dp[a[i]]=true;
    rep(i,n){
        if(!dp[a[i]]) continue;
        for(int j=a[i]*2;j<=100001;j+=a[i]) dp[j]=false;
    }
    rep(i,n-1){
        if(a[i+1]==a[i]) dp[a[i]]=false;
    }
    int ans=0;
    rep(i,100001) if(dp[i]) ans++;
    cout<< ans << endl;
    }
