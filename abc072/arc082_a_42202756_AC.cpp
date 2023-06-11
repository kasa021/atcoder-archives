/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/42202756
 * Submitted at: 2023-06-11 14:14:42
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_a
 * Result: AC
 * Execution Time: 30 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    vector<int> cnt(100000);
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
        if (a[i] - 1 >= 0) cnt[a[i] - 1]++;
        if (a[i] + 1 < 100000) cnt[a[i] + 1]++;
    }
    for (int i = 0; i < 100000; i++) {
        ans = max(ans, cnt[i]);
    }
    cout << ans << endl;
}