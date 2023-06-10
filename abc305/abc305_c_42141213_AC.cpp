/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42141213
 * Submitted at: 2023-06-10 12:30:10
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_c
 * Result: AC
 * Execution Time: 16 ms
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
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    P a1 = { -1, -1 }, a2 = { -1, -1 }, b1 = { -1, -1 }, b2 = { -1, -1 };
    rep(i, h) {
        rep(j, w) {
            if (a1.first == -1 && a1.second == -1) {
                if (s[i][j] == '#') {
                    a1.first = i;
                    a1.second = j;
                }
            }
        }
    }
    rep(i, h) {
        for (int j = w - 1; j >= 0; j--) {
            if (a2.first == -1 && a2.second == -1) {
                if (s[i][j] == '#') {
                    a2.first = i;
                    a2.second = j;
                }
            }
        }
    }
    for (int i = h - 1; i >= 0; i--) {
        rep(j, w) {
            if (b1.first == -1 && b1.second == -1) {
                if (s[i][j] == '#') {
                    b1.first = i;
                    b1.second = j;
                }
            }
        }
    }

    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (b2.first == -1 && b2.second == -1) {
                if (s[i][j] == '#') {
                    b2.first = i;
                    b2.second = j;
                }
            }
        }
    }
    // cout << a1.first << " " << a1.second << endl;
    // cout << a2.first << " " << a2.second << endl;
    // cout << b1.first << " " << b1.second << endl;
    // cout << b2.first << " " << b2.second << endl;

    if (a1.second == b1.second && a2.second == b2.second) {
        rep1(i, a1.first, b1.first + 1) {
            rep1(j, a1.second, a2.second + 1) {
                if (s[i][j] == '.') {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
    else {
        if (a1.second == b1.second) {
            if (a2.second > b2.second) {
                cout << b2.first+1 << " " << a2.second+1 << endl;
            }
            else {
                cout << a1.first+1 << " " << b2.second+1 << endl;
            }
        }
        else {
            if (a1.second < b1.second) {
                cout << b1.first+1 << " " << a1.second+1 << endl;
            }
            else {
                cout << a2.first+1 << " " << b1.second+1 << endl;
            }
        }
    }
}