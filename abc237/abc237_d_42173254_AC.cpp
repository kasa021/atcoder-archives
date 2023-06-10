/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/42173254
 * Submitted at: 2023-06-10 15:28:59
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_d
 * Result: AC
 * Execution Time: 62 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    deque<int> dq;
    dq.push_back(n);
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'L') dq.push_back(i);
        else dq.push_front(i);
    }

    for (int i = 0; i <= n; i++) {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}
