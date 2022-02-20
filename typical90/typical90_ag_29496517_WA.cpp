/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29496517
 * Submitted at: 2022-02-20 08:02:33
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ag
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int p,q;
int main(){

    cin>>p>>q;

    if(p%2==1) p=(p+1)/2;
    else p=p/2;

    if(q%2==1) q=(q+1)/2;
    else q=q/2;

    cout<<p*q<<endl;

    return 0;

}