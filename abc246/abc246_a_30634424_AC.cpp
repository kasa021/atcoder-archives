/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30634424
 * Submitted at: 2022-04-02 12:10:35
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;

    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(x1==x2) cout<<x3<<endl;
    if(x1==x3) cout<<x2<<endl;
    if(x2==x3) cout<<x1<<endl;
    if(y1==y2) cout<<y3<<endl;
    if(y1==y3) cout<<y2<<endl;
    if(y2==y3) cout<<y1<<endl;
    return 0;

}