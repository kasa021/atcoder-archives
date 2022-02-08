/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29159454
 * Submitted at: 2022-02-08 06:45:26
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_m
 * Result: AC
 * Execution Time: 39 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    for(long long i=1;i*i<=n;i++){
        if(n%i!=0) continue; 
        cout<<i<<endl;

        if(i!=n/i) {
        cout<<n/i<<endl;
        }
    }
    return 0;
    }