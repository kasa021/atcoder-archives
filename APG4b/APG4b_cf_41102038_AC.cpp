/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/41102038
 * Submitted at: 2023-05-01 14:19:00
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cf
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> P[i];

    int ans = 0;
    rep(i, N)
    { // 全通り試す
        rep(j, N)
        {
            if (A[i] + P[j] == S)
                ans++;
        }
    }
    cout << ans << endl;
}