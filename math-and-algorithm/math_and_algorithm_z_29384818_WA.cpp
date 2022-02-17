/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29384818
 * Submitted at: 2022-02-17 07:53:26
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_z
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    double long ans=0,i;

    cin>>n;
    for(i=0;i<n;i++){
        ans+=n/(n-i);
    }

    cout<<ans<<endl;
    return 0;

}