/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31116373
 * Submitted at: 2022-04-20 10:11:46
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ac
 * Result: AC
 * Execution Time: 141 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;

ll n;
ll a[500009],dp[500009];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[0]=0;
    dp[1] = a[1];
    for(int i=2;i<=n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+a[i]);
    }
    cout<<dp[n]<<endl;
    return 0;
    }