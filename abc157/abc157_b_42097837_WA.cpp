/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/42097837
 * Submitted at: 2023-06-09 10:43:04
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_b
 * Result: WA
 * Execution Time: 13 ms
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
    map<int, P> mp;
    rep(i, 3) rep(j, 3) {
        int a;
        cin >> a;
        mp[a] = P(i, j);
    }
    int n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];
    vector<vector<bool>> used(3, vector<bool>(3, false));
    rep(i, n) {
        if (mp.count(b[i])) {
            auto [x, y] = mp[b[i]];
            used[x][y] = true;
        }
    }
    bool ok = false;
    // cout<< "ans" << endl;
    rep(i, 3) {
        if (used[i][0] && used[i][1] && used[i][2]) ok = true;
        if (used[0][i] && used[1][i] && used[2][i]) ok = true;
    }
    if (used[0][0] && used[1][1] && used[2][2]) ok = true;
    if (used[0][2] && used[1][1] && used[2][0]) ok = true;
    cout << (ok ? "Yes" : "No") << endl;

    // rep(i, 3) {
    //     rep(j, 3) {
    //         cout << used[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}