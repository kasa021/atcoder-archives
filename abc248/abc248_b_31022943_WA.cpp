/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31022943
 * Submitted at: 2022-04-16 12:27:34
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    int a,b,k;
    cin>>a>>b>>k;
    int ans=a;
    int i=0;

    while((double)ans/2<(double)b/2){
        ans *=k;
        i++;
    }
    cout<<i<<endl;
    return 0;
}