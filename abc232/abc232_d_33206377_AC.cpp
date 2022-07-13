/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/33206377
 * Submitted at: 2022-07-13 13:11:24
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int h,w;
    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    vector dp(h,vector<int>(w,0));
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(s[i][j]=='#') continue;
            dp[i][j]=1;
            if(i+1<h) dp[i][j]=max(dp[i][j],dp[i+1][j]+1);
            if(j+1<w) dp[i][j]=max(dp[i][j],dp[i][j+1]+1);
        }
    }
    cout<<dp[0][0]<<endl;
    return 0;
}