/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc303/submissions/41751168
 * Submitted at: 2023-05-27 12:37:35
 * Problem URL: https://atcoder.jp/contests/abc303/tasks/abc303_d
 * Result: AC
 * Execution Time: 43 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    vector<vector<ll>> dp(s.size() + 1, vector<ll>(2, 0));
    if(s[0] == 'A'){
        dp[0][0] = y;
        dp[0][1] = x+z;
    }else {
        dp[0][0] = x;
        dp[0][1] = y+z;
    }
    rep1(i,1,s.size()){
        if(s[i] == 'A'){
            dp[i][0] = min(dp[i-1][0]+y, dp[i-1][1]+y+z);
            dp[i][1] = min(dp[i-1][0]+z+x, dp[i-1][1]+x);
        }else {
            dp[i][0] = min(dp[i-1][0]+x, dp[i-1][1]+x+z);
            dp[i][1] = min(dp[i-1][0]+y+z, dp[i-1][1]+y);
        }
    }
    cout<< min(dp[s.size()-1][0], dp[s.size()-1][1]) << endl;
}