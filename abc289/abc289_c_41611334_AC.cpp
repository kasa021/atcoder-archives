/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/41611334
 * Submitted at: 2023-05-21 14:33:29
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<set<int>> a(m);
    for (int i = 0; i < m; i++)
    {
        int size = 0;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            a[i].insert(x);
        }
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << m); bit++)
    {
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            if (bit & (1 << i))
            {
                for (auto x : a[i])
                {
                    s.insert(x);
                }
            }
        }
        if ((int)s.size() == n)
        {
            ans++;
        }
    }
    cout << ans << endl;
}