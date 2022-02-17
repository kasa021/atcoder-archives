/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29384898
 * Submitted at: 2022-02-17 07:58:47
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_z
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i;
    double long ans=0.0;

    cin>>n;
    for(i=0;i<n;i++){
        ans+=1.0*n/(n-i);
    }

    printf("%.12fl\n",ans);
    return 0;

}