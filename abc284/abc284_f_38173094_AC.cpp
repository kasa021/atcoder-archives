/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/38173094
 * Submitted at: 2023-01-20 13:15:01
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_f
 * Result: AC
 * Execution Time: 99 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;

int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;

    string a = t.substr(0, n);
    string b = t.substr(n);
    reverse(b.begin(), b.end());

    string x = a + b;
    vector<int> za_x = z_algorithm(x);
    za_x.push_back(0);

    string y = b + a;
    vector<int> za_y = z_algorithm(y);
    za_y.push_back(0);

    for (int i = 0; i <= n; i++)
    {
        if (za_x[2 * n - i] < i)
            continue;
        if (za_y[n + i] < n - i)
            continue;
        cout << t.substr(0, i) + t.substr(n + i) << endl;
        cout << i << endl;
        return 0;
    }
    cout << -1 << endl;
}
