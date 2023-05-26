/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/41697456
 * Submitted at: 2023-05-26 03:16:25
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

bool isprime(int x) {
    int i;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    while (!isprime(x)) {
        x++;
    }
    cout << x << endl;
    return 0;
}
