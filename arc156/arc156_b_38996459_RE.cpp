/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc156/submissions/38996459
 * Submitted at: 2023-02-19 02:58:42
 * Problem URL: https://atcoder.jp/contests/arc156/tasks/arc156_b
 * Result: RE
 * Execution Time: 185 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;
using ull=unsigned long long;
typedef modint998244353 mint;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(200009);
    rep(i,n){
        int tmp;
        cin>>tmp;
        a[tmp]++;
    }
    vector<mint> fact(200009,1);
    rep1(i,1,200001){
        fact[i]=fact[i-1]*i;
    }
    auto nCr = [&](ll n,ll r){
        return fact[n]/fact[r]/fact[n-r];
    };
    ll cnt=0;
    mint ans=0;
    rep(i,n+k){
        if(k-cnt-1+i<i) break;
        ans+=nCr(k-cnt-1+i,i);
        if(!a[i]) cnt++;
    }
    cout<< ans.val() << endl;
    }
