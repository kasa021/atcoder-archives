/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/31763414
 * Submitted at: 2022-05-17 10:01:00
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b)== (c+d)) cout<<"Balanced"<<endl;
    if((a+b)>(c+d)) cout<<"Left"<<endl;
    if((a+b)<(c+d)) cout<<"Right"<<endl;
}