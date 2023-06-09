/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/42097621
 * Submitted at: 2023-06-09 10:30:10
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_b
 * Result: AC
 * Execution Time: 8 ms
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
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int ans = 0;
    rep(i, n) {
        int tmp = 0;
        rep(j, m) {
            int a;
            cin >> a;
            tmp += a * b[j];
        }
        if (tmp + c > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}