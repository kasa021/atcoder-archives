/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/38493763
 * Submitted at: 2023-01-30 23:02:25
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_d
 * Result: AC
 * Execution Time: 197 ms
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
//typedef modll1000000007 mll;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    vector<ll> csa(n + 1);
    csa[0] = 0;
    for (ll i = 0; i < n; i++)
        csa[i + 1] = csa[i] + a[i];

    map<ll,ll> mp;
    ll ans=0;
    rep1(r,1,n+1){
        mp[csa[r-1]]++;
        ans+=mp[csa[r]-k];
    }
    cout<< ans << endl;
    }
