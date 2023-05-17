/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/41486177
 * Submitted at: 2023-05-17 21:03:43
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long ans = 0, wight = 1;
    cin >> s;
    for(int i=s.size()-1;i>=0;i--){
        ans += (s[i]-'A'+1)*wight;
        wight *= 26;
    }
    cout << ans << endl;
}