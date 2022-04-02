/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30633498
 * Submitted at: 2022-04-02 12:09:28
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_a
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;

    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(x1==x2) cout<<x3;
    if(x1==x3) cout<<x2;
    if(x2==x3) cout<<x1;
    if(y1==y2) cout<<y3;
    if(y1==y3) cout<<y2;
    if(y2==y3) cout<<y1;
    return 0;

}