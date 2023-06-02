/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/41916536
 * Submitted at: 2023-06-02 16:18:27
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
    rep(i,(1<<n)){  // n個の文字列を選ぶか選ばないかの2^n通り
        vector<int> cnt(26);  // 文字列に含まれる各文字の出現回数を記録する配列
        rep(j,n){
            if(i & (1<<j)){  // iのjビット目が立っているかどうか, 1<<jは2^j
                rep(k,s[j].size()){
                    cnt[s[j][k]-'a']++;  // 文字列s[j]に含まれる各文字の出現回数を記録
                }
            }
        }
        int cand = 0;  // 答えの候補
        rep(j,26){
            if (cnt[j] == k) cand++;  // 文字jがk回出現している文字列があれば答えの候補を1増やす
        }
        ans = max(ans, cand); // candの最大値が答え
    }
    cout << ans << endl;
}
