/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31087535
 * Submitted at: 2022-04-18 13:58:16
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/dp_a
 * Result: AC
 * Execution Time: 27 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<(n); ++i)

int n,h[100009],dp[100009];
int main(){
    
    cin>>n;
    
    for(int i=1;i<=n;i++) cin>>h[i];

    
    
    for(int i=1;i<=n;i++){
        if(i== 1) dp[i] = 0;
        if(i == 2) dp[i] = abs(h[i-1]-h[i]);
        if(i>=3){
        int a,b;
        a= abs(h[i]-h[i-2]) + dp[i-2];
        b = abs(h[i] -h[i-1]) + dp[i-1];
        dp[i] = min(a,b);
        }
    } 
    cout<<dp[n]<<endl; 
    return 0;
   
}