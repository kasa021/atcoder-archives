/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc291/submissions/39249532
 * Submitted at: 2023-02-26 12:36:07
 * Problem URL: https://atcoder.jp/contests/abc291/tasks/abc291_d
 * Result: AC
 * Execution Time: 127 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
using mint=modint998244353;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    vector<vector<mint>> dp(2,vector<mint>(n+9,0));
    dp[0][0]=1;
    dp[1][0]=1;
    rep(i,n-1){
        if(a[i]!=a[i+1]){
            dp[0][i+1]+=dp[0][i];
        }
        if(a[i]!=b[i+1]){
            dp[1][i+1]+=dp[0][i];
        }
        if(b[i]!=a[i+1]){
            dp[0][i+1]+=dp[1][i];
        }
        if(b[i]!=b[i+1]){
            dp[1][i+1]+=dp[1][i];
        }        
    }
    cout<< (dp[0][n-1]+dp[1][n-1]).val() << endl;
}