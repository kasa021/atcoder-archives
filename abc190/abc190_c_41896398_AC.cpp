/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/41896398
 * Submitted at: 2023-06-01 15:34:40
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_c
 * Result: AC
 * Execution Time: 34 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];
    int ans = 0;
    rep(bit, 1 << k) {  // c[i] or d[i] の皿に載せるかの2^k通り
        vector<bool> dish(n + 1);  // falseなら皿に乗ってない、trueなら皿に乗ってる
        rep(i, k) {
            if (bit & (1 << i))  // c[i]にボールを置く
                dish[c[i]] = true;
            else
                dish[d[i]] = true;  // d[i]にボールを置く
        }
        int cnt = 0;
        rep(i, m) {  // a[i], b[i]の両方にボールが乗っている皿の数を数える
            if (dish[a[i]] && dish[b[i]]) cnt++;
        }
        ans = max(ans, cnt);  // 満たされる条件の最大値を更新
    }
    cout << ans << endl;
}
