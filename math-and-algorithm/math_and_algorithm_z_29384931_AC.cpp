/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29384931
 * Submitted at: 2022-02-17 08:00:55
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_z
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i;
    double ans=0.0;

    cin>>n;
    for(i=0;i<n;i++){
        ans+=1.0*n/(n-i);
    }

    printf("%.12lf\n",ans);
    return 0;

}