/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/42083714
 * Submitted at: 2023-06-08 16:09:27
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_c
 * Result: AC
 * Execution Time: 63 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<ll> b(n + 1);
    for (int i = 0; i < n; ++i) b[i + 1] = b[i] + a[i];  // 累積和
    ll ans = 0, now = 0;
    for (int i = 0; i < m; ++i) now += a[i] * (i + 1);   // 初期化

    ans = now;
    for (int i = 0; i < n - m ; i++) {  // 立式したとおりに計算
        now += m * a[m + i] - (b[m + i] - b[i]);
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}
