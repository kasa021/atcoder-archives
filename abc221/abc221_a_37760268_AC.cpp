/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/37760268
 * Submitted at: 2023-01-06 02:43:16
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
// typedef modll1000000007 mll;
int  main()
{
    int a,b;
    cin>>a>>b;
    a=a-b;
    int ans=1;
    rep(i,a) ans*=32;
    cout<< ans << endl;
}
