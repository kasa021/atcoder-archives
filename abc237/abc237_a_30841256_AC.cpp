/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/30841256
 * Submitted at: 2022-04-10 07:55:21
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    long long n,m=1;
    cin>>n;
    rep(i,31) m*=2;

    if(-m<=n && n<m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}