/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/40954233
 * Submitted at: 2023-04-26 05:14:58
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_c
 * Result: AC
 * Execution Time: 6 ms
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
    vector<int> x(4), y(4);
    rep(i, 4) cin >> x[i] >> y[i];
    int s1, s2, s3, s4;
    s1 = abs((x[0] - x[2]) * (y[1] - y[2]) - (x[1] - x[2]) * (y[0] - y[2]));
    s2 = abs((x[0] - x[3]) * (y[2] - y[3]) - (x[2] - x[3]) * (y[0] - y[3]));
    s3 = abs((x[0] - x[3]) * (y[1] - y[3]) - (x[1] - x[3]) * (y[0] - y[3]));
    s4 = abs((x[1] - x[3]) * (y[2] - y[3]) - (x[2] - x[3]) * (y[1] - y[3]));
    if (s1 + s2 == s3 + s4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}