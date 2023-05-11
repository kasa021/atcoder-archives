/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc149/submissions/41300530
 * Submitted at: 2023-05-11 06:22:36
 * Problem URL: https://atcoder.jp/contests/arc149/tasks/arc149_a
 * Result: AC
 * Execution Time: 33 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;


int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> dp(15,vector<ll>(n+9));
    rep1(i,1,10){
        dp[i][1]=i%m;
    }
    rep1(i,1,10){
        rep1(j,1,n){
            dp[i][j+1]=(dp[i][j]*10+i)%m;
        }
    }
    P ansIdx=P(0,0);
    rep1(j,1,n+1){
        rep1(i,1,10){
            if(dp[i][j]==0){
                ansIdx=max(ansIdx,P(j,i));
            }
        }
    }
    // cout<< ansIdx.first<<" "<<ansIdx.second << endl;
    // cout<< dp[8][9] << endl;
    if(ansIdx.first==0 && ansIdx.second==0){
        cout<< -1 << endl;
        return 0;
    }
    string ans;
    rep(i,ansIdx.first){
        ans+=('0'+ansIdx.second);
    }
    cout<< ans << endl;
    }
    