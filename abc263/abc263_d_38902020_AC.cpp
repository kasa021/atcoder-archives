/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/38902020
 * Submitted at: 2023-02-15 07:47:28
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_d
 * Result: AC
 * Execution Time: 71 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    vector<ll> f(n+9,0),g(n+9,0);
    rep(i,n){
        f[i+1]=min(f[i]+a[i],l*(i+1));
        g[i+1]=min(g[i]+a[n-(i+1)],r*(i+1));
        //cout<<f[i]<<" "<<g[i]<<endl;
    }
    //cout<< f[n]<<" "<<g[n] << endl;
    ll ans=1e18;
    rep(i,n+1) ans=min(ans,f[i]+g[n-i]);
    cout<< ans << endl;
}