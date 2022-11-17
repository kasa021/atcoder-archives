/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc104/submissions/36557018
 * Submitted at: 2022-11-17 12:58:39
 * Problem URL: https://atcoder.jp/contests/arc104/tasks/arc104_b
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int c1 = 0, c2 = 0;
        for (int j = i; j < N; ++j) {
            if (S[j] == 'A')
                c1++;
            else if (S[j] == 'T')
                c1--;
            else if (S[j] == 'C')
                c2++;
            else
                c2--;
            if (c1 == 0 && c2 == 0) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
