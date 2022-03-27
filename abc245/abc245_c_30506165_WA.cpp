/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30506165
 * Submitted at: 2022-03-27 08:21:39
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_c
 * Result: WA
 * Execution Time: 119 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>b[i];
    vector<ll>dp(n+1,false),ep(n+1,false);

    dp[1]=ep[1]=true; //初期値

    for(ll i=2;i<=n;i++){
        if(dp[i-1]){
            if(abs(a[i-1]-a[i])<=k) dp[i]=true;
            if(abs(a[i-i]-b[i])<=k) ep[i]=true;
        }
        if(ep[i-1]){
            if(abs(b[i-1]-a[i])<=k) dp[i]=true;
            if(abs(b[i-i]-b[i])<=k) ep[i]=true;
        }
    }

    if(dp[n]||ep[n]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
