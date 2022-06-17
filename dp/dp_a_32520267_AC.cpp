/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/32520267
 * Submitted at: 2022-06-17 13:15:59
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_a
 * Result: AC
 * Execution Time: 28 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
        int n;
        cin>>n;
        int h[n+1];
        rep(i,n) cin>>h[i];
        int dp[n+1]={0};
       dp[2]=abs(h[1]-h[2]);
       for(int i=3;i<=n;i++){
        dp[i]=min(abs(h[i]-h[i-2])+dp[i-2],abs(h[i]-h[i-1])+dp[i-1]);
       }
       cout<<dp[n]<<endl;
       return 0;  
    }