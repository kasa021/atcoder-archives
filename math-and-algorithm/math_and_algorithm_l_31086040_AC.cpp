/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31086040
 * Submitted at: 2022-04-18 12:57:15
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_l
 * Result: AC
 * Execution Time: 39 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    long long n;
    cin>>n;
    int ans = 0;
    for(long long i=2;i<sqrt(n);i++){
        if(n%i==0) ans++;
    }
    if(ans == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}