/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc123/submissions/37717105
 * Submitted at: 2023-01-03 13:37:01
 * Problem URL: https://atcoder.jp/contests/abc123/tasks/abc123_c
 * Result: RE
 * Execution Time: 117 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n;
    cin>>n;
    vector<ll> a(5);
    rep(i,5) cin>>a[i];
    ll m=min({a[0],a[1],a[2],a[3],a[4]});
    ll ans=5+(n-1)/m;
    cout<< ans << endl;


}
