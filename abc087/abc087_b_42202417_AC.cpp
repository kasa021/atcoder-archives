/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/42202417
 * Submitted at: 2023-06-11 14:00:56
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/abc087_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (500 * i + 100 * j + 50 * k == x) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}