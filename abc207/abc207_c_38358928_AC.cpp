/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc207/submissions/38358928
 * Submitted at: 2023-01-27 14:41:11
 * Problem URL: https://atcoder.jp/contests/abc207/tasks/abc207_c
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<double> l(N),r(N);
    for(int i=0; i<N; i++){
        int t; cin >> t >> l[i] >> r[i];
        t--;
        if(t&1) r[i] -= 0.5;
        if(t&2) l[i] += 0.5;
    }
    int ans = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            ans += (max(l[i],l[j]) <= min(r[i],r[j]));
        }
    }
    cout << ans << endl;
}
