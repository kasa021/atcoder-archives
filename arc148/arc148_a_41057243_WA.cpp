/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/41057243
 * Submitted at: 2023-04-29 15:47:21
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_a
 * Result: WA
 * Execution Time: 73 ms
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
    ll n,greatestCommonDiviser;
    cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    greatestCommonDiviser=a[0];
    rep(i,n-1) greatestCommonDiviser=__gcd(greatestCommonDiviser,a[0]);
    if(greatestCommonDiviser>1)cout<< 1 << endl;
    else cout<< 2 << endl;
}
