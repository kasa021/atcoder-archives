/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc014/submissions/42044739
 * Submitted at: 2023-06-06 15:16:31
 * Problem URL: https://atcoder.jp/contests/arc014/tasks/arc014_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    set<string> st;
    st.insert(w[0]);
    char end = w[0][w[0].size() - 1];
    for (int i = 1; i < n - 1; i++){
        if (st.count(w[i]) || end != w[i][0]) {
            if(i % 2 == 0) cout << "LOSE" << endl;
            else cout << "WIN" << endl;
            return 0;
        }
        st.insert(w[i]);
        end = w[i][w[i].size() - 1];
    }
    cout<<"DRAW"<<endl;

}