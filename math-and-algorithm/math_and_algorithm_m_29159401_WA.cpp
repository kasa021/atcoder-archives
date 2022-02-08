/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29159401
 * Submitted at: 2022-02-08 06:42:31
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_m
 * Result: WA
 * Execution Time: 1112 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    for(long long i=1;i*i<=n;i++){
        if(n%i==0) cout<<i<<endl;
        if(i!=n/i) cout<<n/i<<endl;

    }
    return 0;
    }