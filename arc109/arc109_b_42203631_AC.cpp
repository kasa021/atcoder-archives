/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/42203631
 * Submitted at: 2023-06-11 15:00:10
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll l = 0, r = 2e9;
    while (r - l > 1) {
        ll mid = (l + r) / 2;
        if (mid * (mid + 1) / 2 <= n + 1) l = mid;
        else
            r = mid;
    }
    cout << n - l + 1 << endl;
}