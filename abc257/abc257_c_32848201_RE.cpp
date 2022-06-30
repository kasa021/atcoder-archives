/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32848201
 * Submitted at: 2022-06-30 08:11:44
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_c
 * Result: RE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define graph <vector<vector<int>>


int main() {
    ll n,m=1000000000,M=0;
    cin>>n;
    string s,t;
    cin>>s;
    ll w[n];
    rep(i,n) cin>>w[i];
    rep(i,n) {
        m=min(m,w[i]);
        M=max(M,w[i]);
    } 
    //cout<<m<<" "<<M<<endl;
    ll ans[M-m+4]={0};
    rep2(i,m-1,M+2){
        rep(j,n){
            if(i>w[j]){
                if(s[j]=='0') ans[i-m+1]++;
            }else{
                if(s[j]=='1') ans[i-m+1]++;
            }
        }
       // cout<<ans[i]<<endl;
    }
    ll a=0;
    rep(i,M-m+4) a=max(a,ans[i]);
    cout<<a<<endl;
    return 0;

}