/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/42203202
 * Submitted at: 2023-06-11 14:37:11
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_c
 * Result: AC
 * Execution Time: 146 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // 二分探索する
    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        auto itr = lower_bound(b.begin(), b.end(), a[i]);
        if (itr != b.end()) ans = min(ans, abs(a[i] - *itr));
        if (itr != b.begin()) ans = min(ans, abs(a[i] - *(itr - 1)));
    }
    cout << ans << endl;
}