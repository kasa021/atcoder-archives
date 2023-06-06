/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc156/submissions/42047015
 * Submitted at: 2023-06-06 23:04:01
 * Problem URL: https://atcoder.jp/contests/abc156/tasks/abc156_c
 * Result: AC
 * Execution Time: 13 ms
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

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    int ans = 1e9;
    rep1(i, 1, 101) {
        int sum = 0;
        rep(j, n) sum += (x[j]-i)*(x[j]-i);
        ans = min(ans, sum);
    }
    cout << ans << endl;
}