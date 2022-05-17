/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/31763828
 * Submitted at: 2022-05-17 10:28:26
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if((a+b)%2==1) cout<<"IMPOSSIBLE"<<endl;
   
    else  cout<<(a+b)/2<<endl;
}