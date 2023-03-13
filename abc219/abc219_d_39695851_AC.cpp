/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39695851
 * Submitted at: 2023-03-13 05:39:37
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_d
 * Result: AC
 * Execution Time: 156 ms
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
    int n, x, y;
    cin >> n >> x >> y;
    const int INF = 1000000;
    vector<vector<vector<int>>> dp(n + 9, vector<vector<int>>(x + 9, vector<int>(y + 9, INF)));
    dp[0][0][0] = 0;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        rep(j, x + 1) rep(k, y + 1)
        {
            dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
            dp[i + 1][min(j + a, x)][min(k + b, y)] = min(dp[i + 1][min(j + a, x)][min(k + b, y)],dp[i][j][k]+1);
        }
    }
    if(dp[n][x][y]==INF) cout<< -1 << endl;
    else cout<< dp[n][x][y] << endl;
}