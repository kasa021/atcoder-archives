/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/39550096
 * Submitted at: 2023-03-09 04:51:11
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_e
 * Result: AC
 * Execution Time: 28 ms
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
    int inf=1001001001;
    int h, n;
    cin >> h >> n;
    vector<int> dp(h+1, inf);
    dp[0]=0;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        rep(j,h){
            int nj=min(j+a,h);
            dp[nj]=min(dp[nj],dp[j]+b);
        }
    }
    cout << dp[h] << endl;
    return 0;
}