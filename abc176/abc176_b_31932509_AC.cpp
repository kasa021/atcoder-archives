/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/31932509
 * Submitted at: 2022-05-24 09:53:06
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=s[i]-'0';
    }

    if(ans%9==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}