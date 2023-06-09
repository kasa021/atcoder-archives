/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/42097917
 * Submitted at: 2023-06-09 10:48:08
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/abc086_b
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

bool is_squeare_number(int n) {
    for(int i=0; i*i<=n; i++) {
        if(i*i == n) return true;
    }
    return false;
}

int main() {
    string a, b;
    cin >> a >> b;
    int c = stoi(a + b);
    cout<< (is_squeare_number(c) ? "Yes" : "No") << endl;
}