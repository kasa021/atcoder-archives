/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc022/submissions/42225807
 * Submitted at: 2023-06-12 20:17:13
 * Problem URL: https://atcoder.jp/contests/abc022/tasks/abc022_b
 * Result: AC
 * Execution Time: 60 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    set<int> flower;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        // i番目より前にaがあれば受粉する
        if (flower.count(a)) ans++;
        else
            flower.insert(a);
    }
    cout << ans << endl;
}
