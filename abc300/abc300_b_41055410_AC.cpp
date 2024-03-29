/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41055410
 * Submitted at: 2023-04-29 14:34:07
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: AC
 * Execution Time: 10 ms
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
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    rep(i, h) cin >> a[i];
    rep(i, h) cin >> b[i];
    rep(s, h)
    {
        rep(t, w)
        {
            vector<string> c=a;
            rep(i, h)
            {
                rep(j, w) c[i][j] = a[(i + s) % h][(j + t) % w];
            }
            bool ok = true;
            rep(i, h) rep(j, w) if (c[i][j] != b[i][j]) ok = false;
            if (ok)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
