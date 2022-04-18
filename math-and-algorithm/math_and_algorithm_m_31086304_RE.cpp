/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31086304
 * Submitted at: 2022-04-18 13:08:21
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_m
 * Result: RE
 * Execution Time: 111 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    long long n;
    cin>>n;

    for(long long i = 0; i<sqrt(n);i++){
        if(n%i == 0) continue;
        cout<<i<<endl;
        if(i != n/i) cout<<n/i<<endl;
    }
    return 0;
}