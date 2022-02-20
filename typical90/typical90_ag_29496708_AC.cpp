/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29496708
 * Submitted at: 2022-02-20 08:09:43
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ag
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int p,q;
int main(){

    cin>>p>>q;

    if(p==1||q==1) cout<<p*q<<endl;
    else cout<< ((p+1)/2)*((q+1)/2)<<endl;

    return 0;

}
