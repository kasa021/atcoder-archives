/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/35622360
 * Submitted at: 2022-10-13 10:02:19
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_d
 * Result: AC
 * Execution Time: 391 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    ll n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
        a[i]--;
    }
    vector<vector<int>> dp(n+9,vector<int>(100,0));
    rep(i,n) dp[i][0]=a[i];
    rep(j,80){
        rep(i,n){
            dp[i][j+1]=dp[dp[i][j]][j];
        }
    }
    int i=0,now=0;
    while(k){
        if(k&1ll){
           now=dp[now][i];
           //cout<< now+1 << endl;
        }
        k>>=1;
        i++;
    }
    cout<< now+1 << endl;
}