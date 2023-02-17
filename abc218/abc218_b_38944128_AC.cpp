/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/38944128
 * Submitted at: 2023-02-17 11:25:33
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_b
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    vector<int> p(26);
    rep(i, 26)
    {
        cin >> p[i];
    }
    rep(i, 26)
    {
        cout << (char)('a' + p[i] - 1);
    }
    cout << endl;
    return 0;
}
