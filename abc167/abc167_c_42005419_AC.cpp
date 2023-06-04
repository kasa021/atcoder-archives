/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/42005419
 * Submitted at: 2023-06-04 15:16:06
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin>>n>>m>>x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        cin>>c[i];
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    int ans = 1e9;
    for (int i = 0; i < (1<<n);i++){
        int cost = 0;
        vector<int> comprehension(m);
        for (int j = 0; j < n;j++){
            if(i & ( 1<< j)){
                cost += c[j];
                for (int k = 0; k < m;k++){
                    comprehension[k] += a[j][k];
                }
            }
        }
        bool ok = true;
        for(int k=0; k<m; k++) {
            if(comprehension[k] < x) {
                ok = false;
            }
        }
        if(ok) {
            ans = min(ans, cost);
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl;
}