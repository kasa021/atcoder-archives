/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31087436
 * Submitted at: 2022-04-18 13:54:13
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/dp_a
 * Result: RE
 * Execution Time: 115 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<(n); ++i)


int main(){
    int n;
    cin>>n;
    vector<int> h(n);
    for(int i=1;i<=n;i++) cin>>h[i];

    vector<int> dp(n+1);
    
    for(int i=1;i<=n;i++){
        if(i== 1) dp[i] = 0;
        if(i == 2) dp[i] = abs(h[i-1]-h[i]);
        int a,b;
        a= abs(h[i]-h[i-2]) + dp[i-1];
        b = abs(h[i] -h[i-1]) + dp[i-2];
        dp[i] = min(a,b);
    } 
    cout<<dp[n]<<endl;
    return 0;
   
}