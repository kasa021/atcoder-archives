/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/37630876
 * Submitted at: 2022-12-30 07:42:27
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_d
 * Result: AC
 * Execution Time: 461 ms
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

vector<ll> enum_div(ll n)
{
    vector<ll> res;
    res.push_back(1);
    res.push_back(n);
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i * i != n)
            {
                res.push_back(n / i);
            }
        }
    }
    return res;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a == 1 || b == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    vector<ll> a_enum, b_enum, com;
    a_enum = enum_div(a);
    b_enum = enum_div(b);
    for (auto v : a_enum)
    {
        for (auto nv : b_enum)
        {
            if (v == nv)
                com.push_back(v);
        }
    }
    sort(all(com));
    // for(auto v:com) cout<< v << endl;
    vector<ll> ans;
    map<ll, vector<ll>> mp;
    for (auto v : com)
    {
        mp[v] = enum_div(v);
    }
    for (auto v : com)
    {

        if (ans.size() == 0)
            ans.push_back(v);
        else
        {
            bool f = true;
            for (auto nv : ans)
            {

                if (nv == 1)
                    continue;

                for (auto nnv : mp[nv])
                {
                    // cout << nv << " " << nnv << endl;
                    if (nnv == 1)
                        continue;
                    if (v % nnv == 0)
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (f)
            {
                // cout << v << endl;
                ans.push_back(v);
            }
        }
    }
    cout << ans.size() << endl;
}
