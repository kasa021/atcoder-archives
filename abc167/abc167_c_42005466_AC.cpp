/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/42005466
 * Submitted at: 2023-06-04 15:20:09
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;  // n: number of books, m: number of algorithms, x: comprehension
    cin >> n >> m >> x;
    vector<int> c(n);  // c: cost of each book
    vector<vector<int>> a(n, vector<int>(m));  // a: comprehension of each book
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 1e9;  // 1e9: 10^9
    for (int i = 0; i < (1 << n); i++) {
        int cost = 0;       // cost: total cost
        vector<int> comprehension(m);  // comprehension of each algorithm
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {  // iのj bitが立っているなら、本jを買う。
                cost += c[j];
                for (int k = 0; k < m; k++) {
                    comprehension[k] += a[j][k];  // 本jを買ったら、アルゴリズムkの理解度がa[j][k]上がる。
                }
            }
        }
        bool ok = true;
        for (int k = 0; k < m; k++) {  // 全てのアルゴリズムの理解度がx以上かどうかをチェックする。
            if (comprehension[k] < x) {
                ok = false;
            }
        }
        if (ok) {  // 全てのアルゴリズムの理解度がx以上なら、ansを更新する。
            ans = min(ans, cost);
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl; // ansが1e9なら、-1を出力する。
}