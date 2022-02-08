/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169565
 * Submitted at: 2022-02-08 15:22:22
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_s
 * Result: RE
 * Execution Time: 121 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[n];
    long long p=0,q=0,r=0;

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];

    for (long long i=0;i<n;i++){
    switch(a[i]){
        case 1: p++; break;
        case 2: q++; break;
        case 3: r++; break;
    }
    }

    cout<<(p*p)/2+(q*q)/2+(r+r)/2<<endl;
}