/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/42046994
 * Submitted at: 2023-06-06 23:01:41
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_b
 * Result: AC
 * Execution Time: 8 ms
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
    int a, b;
    cin >> a >> b;
    int ans = 0, cnt = 1;
    while(cnt<b){
        ans++;
        cnt += a-1;
    }
    cout << ans << endl;
}