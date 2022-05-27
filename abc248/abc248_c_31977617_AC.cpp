/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31977617
 * Submitted at: 2022-05-27 10:08:27
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_c
 * Result: AC
 * Execution Time: 25 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
const int mod = 998244353;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector dp(n+1,vector<int> (k+1));
    dp[0][0]=1;
    for(int x=1;x<=n;x++){
        for(int y=0;y<=k;y++){
            int now=0;
            for(int i=1;i<=m;i++){
            if(y-i>=0){
                now+=dp[x-1][y-i];
                now%=mod;
                
            }
        }
        dp[x][y]=now;
        }
    }
    int ans=0;
    for(int y=0;y<=k;y++){
        ans+=dp[n][y];
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}