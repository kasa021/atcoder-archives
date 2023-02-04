/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc288/submissions/38611175
 * Submitted at: 2023-02-04 12:17:14
 * Problem URL: https://atcoder.jp/contests/abc288/tasks/abc288_c
 * Result: AC
 * Execution Time: 106 ms
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

int main()
{
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    int ans = 0;
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        if (uf.same(a, b))
            ans++;
        else
            uf.merge(a, b);
    }
    cout << ans << endl;
}
