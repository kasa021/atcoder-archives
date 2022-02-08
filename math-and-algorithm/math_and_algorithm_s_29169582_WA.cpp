/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169582
 * Submitted at: 2022-02-08 15:23:12
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_s
 * Result: WA
 * Execution Time: 68 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[5000000];
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