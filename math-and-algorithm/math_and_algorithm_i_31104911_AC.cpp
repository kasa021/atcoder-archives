/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31104911
 * Submitted at: 2022-04-19 14:44:22
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_i
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
ll n,s;
ll a[69];
bool dp[69][100009];
int main(){
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];

    dp[0][0] = true;
    for(int i =1;i<=n;i++) dp[0][i] = false;

    for(int i =1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(j<a[i]) dp[i][j] = dp[i-1][j];
            if(j>=a[i]) {
                if(dp[i-1][j] == true || dp[i-1][j-a[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }

        
        if(dp[n][s] == true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

        return 0;
    }