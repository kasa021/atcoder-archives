/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31087759
 * Submitted at: 2022-04-18 14:09:15
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ab
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<(n); ++i)

int dp[54];
int main(){
    int n;
    cin>>n;
    int i;
    for( i = 0;i<=n;i++){
        if(i==0) dp[i] = 1;
        if(i==1) dp[i] = 1;
        if(i>=2) dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;
    return 0;


}