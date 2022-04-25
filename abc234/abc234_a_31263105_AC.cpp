/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/31263105
 * Submitted at: 2022-04-25 08:47:08
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_a
 * Result: AC
 * Execution Time: 19 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int f(int a){
    int x;
    x= a*a+2*a+3;
    return x;
}
int main(){
    int t,a,b,c,d;
    cin>>t;
    a=f(t);
    b=f(a);
    c=f(a+t);
    d=f(c+b);
    

    cout<<d<<endl;
    return 0;
}