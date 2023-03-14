/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc107/submissions/39725326
 * Submitted at: 2023-03-14 10:56:57
 * Problem URL: https://atcoder.jp/contests/arc107/tasks/arc107_b
 * Result: AC
 * Execution Time: 7 ms
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
using ull = unsigned long long;
// typedef modint1000000007 mint;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    rep1(q, 2, 2 * n + 1)
    {
        ll p=k+q;
        if (2 <= p && p <= 2 * n)
        {
            ll a,b;
            if(p-1>n){
                if(-p+1+2*n>0) a=-p+1+2*n;
                else a=0;
            }else a=p-1;
            if(q-1>n){
                if(-q+1+2*n>0) b=-q+1+2*n;
                else b=0;
            }else b=q-1;
            ans+=a*b;
        }
    }
    cout << ans << endl;
}
