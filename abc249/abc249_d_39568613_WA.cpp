/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/39568613
 * Submitted at: 2023-03-10 03:29:48
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_d
 * Result: WA
 * Execution Time: 116 ms
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
using ull = unsigned long long;
// typedef modint1000000007 mint;

vector<P> enum_div(int n)
{
    vector<P> res;
    res.push_back(P(1, n));
    if (n >= 4)
    {
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (i * i != n)
                {
                    res.push_back(P(i, n / i));
                }
                else
                    res.push_back(P(i, i));
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    vector<ll> a(1000009, 0);
    rep(i, n)
    {
        ll x;
        cin >> x;
        a[x]++;
    }

    rep1(i, 1, 100009)
    {
        if (a[i] == 0)
            continue;
        vector<P> res = enum_div(i);
        rep(j, res.size())
        {
            int f = res[j].first, s = res[j].second;
            if (f == s)
            {
                ans += a[i] * a[f] * a[s];
            }
            else
            {
                ans += (ll)2 * a[i] * a[f] * a[s];
            }
        }
    }
    cout << ans << endl;
}
