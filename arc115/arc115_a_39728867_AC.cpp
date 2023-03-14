/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/39728867
 * Submitted at: 2023-03-14 13:01:58
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_a
 * Result: AC
 * Execution Time: 62 ms
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
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    ll odd = 0, even = 0;
    rep(i, n)
    {
        int c = 0;
        rep(j, m)
        {
            if (s[i][j] == '1')
                c++;
        }
        if (c & 1)
            odd++;
        else
            even++;
    }
    ll ans = n * (n - 1) - (odd * (odd - 1) + even * (even - 1));
    ans /= 2;
    cout << ans << endl;
}
