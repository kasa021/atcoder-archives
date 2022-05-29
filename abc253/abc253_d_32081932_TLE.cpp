/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32081932
 * Submitted at: 2022-05-29 11:34:01
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll sum=n*(n+1)/2;
    ll suma=0,sumb=0,sumab=0;
    for(ll i=1;i<=n;i++){
        if(i%a==0) suma+=i;
        if(i%b==0) sumb+=i;
        if(i%a==0&&i%b==0) sumab+=i;
    }
    ll ans=sum-suma-sumb+sumab;
    cout<<ans<<endl;
}