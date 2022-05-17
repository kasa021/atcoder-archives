/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/31763772
 * Submitted at: 2022-05-17 10:25:00
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_a
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==0&&b!=0) cout<<"IMPOSSIBLE"<endl;
    else if(a!=0&&b==0) cout<<"IMPOSSIBLE"<endl;
    else if(a!=0&&b!=0) cout<<(a+b)/2<<endl;
}