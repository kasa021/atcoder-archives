/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/41330339
 * Submitted at: 2023-05-12 18:03:55
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_a
 * Result: AC
 * Execution Time: 150 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
using ull = unsigned long long;

const int inf = 1e9;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<P> a(n);
    rep(i, n)
    {
        int b;
        cin >> b;
        a[i] = P(b, -i);
    }
    sort(all(a));
    ll mx = -inf, ans = inf;
    for (auto [v, i] : a)
    {
        i = -i;
        if (i < k)
            mx = max(mx, i);
        else
            ans = min(ans, i - mx);
    }
    if (ans >= inf)
        ans = -1;
    cout << ans << endl;
}
