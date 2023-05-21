/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc150/submissions/41598522
 * Submitted at: 2023-05-21 06:42:46
 * Problem URL: https://atcoder.jp/contests/abc150/tasks/abc150_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];
    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = i + 1;
    int cnt = 0, p_idx = 0, q_idx = 0;
    do
    {
        cnt++;
        if (a == p)
            p_idx = cnt;
        if (a == q)
            q_idx = cnt;
    } while (next_permutation(a.begin(), a.end()));
    cout << abs(p_idx - q_idx) << endl;
}