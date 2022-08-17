/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/34101315
 * Submitted at: 2022-08-17 03:31:23
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph=<vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int a;
    cin>>a;
    int b=a%4;
    if(b==0) cout<<a+2<<endl;
    if(b==1) cout<<a+1<<endl;
    if(b==2) cout<<a<<endl;
    if(b==3) cout<<a+b<<endl;
    return 0;
    
}