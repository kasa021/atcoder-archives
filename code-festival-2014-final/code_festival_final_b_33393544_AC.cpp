/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/33393544
 * Submitted at: 2022-07-21 10:08:04
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    string s;
    cin>>s;
    //cout<<s<<endl;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(i%2==0) ans+=(s[i]-'0');
        else ans-=(s[i]-'0');

    }
    cout<<ans<<endl;

    return 0;
}