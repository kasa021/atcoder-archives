/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/33392946
 * Submitted at: 2022-07-21 09:33:04
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int a,b;
    cin>>a>>b;
    if(a+b==3)cout<<3<<endl;
    if(a+b==4) cout<<2<<endl;
    if(a+b==5)cout<<1<<endl;

    return 0;
}