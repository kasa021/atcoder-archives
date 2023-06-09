/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/42103601
 * Submitted at: 2023-06-09 16:28:03
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
    vector<int> w(n + 1, 0), e(n + 1, 0);
    for(int i=0;i<n;i++){
        w[i + 1] = w[i] + (s[i] == 'W');
        e[i + 1] = e[i] + (s[i] == 'E');
    }
    int ans = 1e9;
    for(int i=0;i<n;i++){
        ans = min(ans, w[i] + e[n] - e[i + 1]);
    }
    cout << ans << endl;
}