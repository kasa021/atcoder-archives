/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc067/submissions/38274964
 * Submitted at: 2023-01-23 02:02:14
 * Problem URL: https://atcoder.jp/contests/abc067/tasks/arc078_a
 * Result: AC
 * Execution Time: 54 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    vector<ll> csa(n + 1);
    csa[0] = 0;
    for (ll i = 0; i < n; i++)
        csa[i + 1] = csa[i] + a[i];
    ll ans=INT64_MAX;
    for(ll i=1;i<n;i++){
        ll div=abs(csa[i]-(csa[n]-csa[i]));
        ans=min(ans,div);
    }
    cout<< ans << endl;
    }
