/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc291/submissions/39227481
 * Submitted at: 2023-02-26 12:02:30
 * Problem URL: https://atcoder.jp/contests/abc291/tasks/abc291_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    string s;
    cin >> s;
    rep(i, s.size())
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            cout << i + 1 << endl;
        }
    }
}