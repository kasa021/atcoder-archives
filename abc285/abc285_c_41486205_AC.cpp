/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/41486205
 * Submitted at: 2023-05-17 21:13:44
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long ans = 0; // 答え
    long long wight = 1; // 重み
    cin >> s;
    for(int i=s.size()-1;i>=0;i--){
        ans += (s[i]-'A'+1)*wight;
        wight *= 26; // 桁が上がるごとに26倍する
    }
    cout << ans << endl;
}