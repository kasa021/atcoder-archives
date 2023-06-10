/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42120831
 * Submitted at: 2023-06-10 12:02:28
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_a
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
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n;
    cin >> n;
    vector<int> a(21);
    rep(i,21){
        a[i] = i * 5;
    }
    int ans = 100, mi = 100;
    rep(i,21){
        if(mi> abs(a[i]-n)){
            mi = abs(a[i]-n);
            ans = a[i];
        }
    }
    cout << ans << endl;
}