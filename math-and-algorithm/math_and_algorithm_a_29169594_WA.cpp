/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169594
 * Submitted at: 2022-02-08 15:23:58
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 8 ms
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

    cout<<(p*(p-1))/2+(q*(q-1))/2+(r+(r-1))/2<<endl;
}