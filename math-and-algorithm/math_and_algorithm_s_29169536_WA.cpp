/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169536
 * Submitted at: 2022-02-08 15:20:27
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_s
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[n];
    long long b[3];

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];

    for (long long i=0;i<n;i++){
    switch(a[i]){
        case 1: b[0]++; break;
        case 2: b[1]++; break;
        case 3: b[2]++; break;
    }
    }

    cout<<(b[0]*b[0])/2+(b[1]*b[1])/2+(b[2]*b[2])/2<<endl;
}