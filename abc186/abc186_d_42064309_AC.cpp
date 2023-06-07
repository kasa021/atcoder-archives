/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/42064309
 * Submitted at: 2023-06-07 16:05:42
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_d
 * Result: AC
 * Execution Time: 81 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long  // long long型の別名を定義

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());                            // 昇順ソート

    vector<ll> b(n + 1);
    for (int i = 0; i < n; i++) b[i + 1] = b[i] + a[i];  // 累積和を求める

    ll ans = 0;  // オーバーフローしないようにlong long型で宣言
    for (int i = 0; i < n; i++) {
        ans += b[n] - b[i] - a[i] * (n - i);
    }
    cout << ans << endl;
}