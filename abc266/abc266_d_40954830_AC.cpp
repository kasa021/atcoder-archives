/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/40954830
 * Submitted at: 2023-04-26 05:54:20
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_d
 * Result: AC
 * Execution Time: 83 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;
    vector<vector<ll>> len(100009, vector<ll>(5, 0));
    rep(i, n)
    {
        ll t, x, a;
        cin >> t >> x >> a;
        len[t][x] = a;
    }
    vector<vector<ll>> dp(100009, vector<ll>(5, -1));
    dp[0][0] = 0;
    rep1(i, 1, 100001)
    {
        rep(j, 5)
        {
            if (j == 0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]);
            }
            else if (j == 4)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]);
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], max(dp[i - 1][j - 1], dp[i - 1][j + 1]));
            }
            if (dp[i][j] != -1)
                dp[i][j] += len[i][j];
        }
    }
    ll ans = 0;
    rep(i, 5) ans = max(ans, dp[100000][i]);
    cout << ans << endl;
}