/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/41854730
 * Submitted at: 2023-05-30 12:17:39
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_c
 * Result: AC
 * Execution Time: 22 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.size(), ans = 20;
    for (int i = 0; i < (1 << size); i++) {
        int sum = 0;
        for (int j = 0; j < size; j++) {
            if (i & (1 << j)) {
                sum += s[j] - '0';
            }
        }
        if (sum % 3 == 0  && sum != 0) {
            ans = min(ans, size - __builtin_popcount(i));
        }
    }
    cout << (ans == 20 ? -1 : ans) << endl;
}