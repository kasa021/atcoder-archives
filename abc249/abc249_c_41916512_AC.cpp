/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/41916512
 * Submitted at: 2023-06-02 16:15:47
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_c
 * Result: AC
 * Execution Time: 20 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)


int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    rep(i,(1<<n)){
        vector<int> cnt(26);
        rep(j,n){
            if(i & (1<<j)){
                rep(k,s[j].size()){
                    cnt[s[j][k]-'a']++;
                }
            }
        }
        int cand = 0;
        rep(j,26){
            if (cnt[j] == k) cand++;
        }
        ans = max(ans, cand);
    }
    cout << ans << endl;
}
