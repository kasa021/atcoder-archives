/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/30841211
 * Submitted at: 2022-04-10 07:53:32
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_a
 * Result: WA
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    long long n,m=1;
    cin>>n;
    rep(i,31) m*=2;

    if(abs(n)<m|| n == -m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}