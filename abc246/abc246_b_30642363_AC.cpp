/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30642363
 * Submitted at: 2022-04-02 12:22:54
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    double x,y,n;
    cin>>x>>y;

    n=sqrt(x*x + y*y);

    cout<<x/n<<" "<<y/n<<endl;

    return 0;



}