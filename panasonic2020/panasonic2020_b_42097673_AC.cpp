/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/42097673
 * Submitted at: 2023-06-09 10:32:51
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
 * Result: AC
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    ll h, w;
    cin>>h>>w;
    ll ans = 0;
    if (h == 1 || w == 1) {
        ans = 1;
    } else {
        ans = (h * w + 1) / 2;
    }
    cout << ans << endl;
}