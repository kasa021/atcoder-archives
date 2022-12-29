/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/37613865
 * Submitted at: 2022-12-29 08:27:31
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_c
 * Result: WA
 * Execution Time: 59 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<P> a(n);
    rep(i,n){
        int s,t;
        cin>>s>>t;
        a[i]=P(s,t);
    }
    sort(all(a));
    vector<int> csb(n + 1);
    csb[0] = 0;
    for (ll i = 0; i < n; i++)
        csb[i + 1] = csb[i] + a[i].second;
    auto v=lower_bound(all(csb),k)-csb.begin();
    //cout<< v << endl;
    cout<< a[v-1].first << endl;
}
