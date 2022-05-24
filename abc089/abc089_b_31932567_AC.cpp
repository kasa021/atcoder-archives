/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/31932567
 * Submitted at: 2022-05-24 09:57:17
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n;
    cin>>n;
    char s[n];
    rep(i,n) cin>>s[i];

    set<char> p;
    rep(i,n) p.insert(s[i]);
    if(p.size()==3) cout<<"Three"<<endl;
    else cout<<"Four"<<endl;
    return 0;
}