/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc110/submissions/37565084
 * Submitted at: 2022-12-26 13:03:38
 * Problem URL: https://atcoder.jp/contests/abc110/tasks/abc110_c
 * Result: AC
 * Execution Time: 25 ms
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
    string s, t;
    cin >> s >> t;
    map<int, set<char>> alps;
    vector<int> a(30);
    rep(i, s.size())
    {
        alps[s[i] - 'a'].insert(t[i]);
    }
    rep(i, 30)
    {
        if (alps[i].size() >= 2)
        {
            cout << "No" << endl;
            return 0;
        }
        char b;
        if (alps[i].size())
        {
            char b = *rbegin(alps[i]);
            a[b - 'a']++;
        }
    }
    rep(i, 30)
    {
        if (a[i] >= 2)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
