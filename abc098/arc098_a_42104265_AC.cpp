/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/42104265
 * Submitted at: 2023-06-09 17:57:31
 * Problem URL: https://atcoder.jp/contests/abc098/tasks/arc098_a
 * Result: AC
 * Execution Time: 18 ms
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> w(n + 1, 0), e(n + 1, 0);  // w[i]: i番目までのWの数, e[i]: i番目までのEの数
    for(int i=0;i<n;i++){
        w[i + 1] = w[i] + (s[i] == 'W');  // Wを見ている人の累積和を求める
        e[i + 1] = e[i] + (s[i] == 'E');  // Eを見ている人の累積和を求める
    }
    int ans = 1e9;
    for(int i=0;i<n;i++){  // i番目がリーターの時の向きを変える人の人数を求める
        ans = min(ans, w[i] + e[n] - e[i + 1]);
    }
    cout << ans << endl;
}