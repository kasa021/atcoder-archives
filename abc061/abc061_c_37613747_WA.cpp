/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/37613747
 * Submitted at: 2022-12-29 08:20:13
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_c
 * Result: WA
 * Execution Time: 56 ms
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
// typedef modint1000000007 mint;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    vector<int> csb(n + 1);
    csb[0] = 0;
    for (ll i = 0; i < n; i++)
        csb[i + 1] = csb[i] + b[i];
    auto v=lower_bound(all(csb),k)-csb.begin();
    //cout<< v << endl;
    cout<< a[v-1] << endl;
}
