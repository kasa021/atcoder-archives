/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/31289308
 * Submitted at: 2022-04-26 14:00:20
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_c
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using mint =modint998244353;


mint sum(ll x){
    return mint(1+x)*x/2;
}
int main(){
    ll n;
    cin>>n;
    ll l=1;
    int keta =1;
    mint ans;
    while(l<=n){
        ll r = l*10;
        ll len = min(n+1,r)-1;
        ans+=sum(len);
        l*=10;keta++;
    }
    cout<<ans.val()<<endl;
    return 0;
}