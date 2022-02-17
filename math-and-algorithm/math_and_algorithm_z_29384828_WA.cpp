/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29384828
 * Submitted at: 2022-02-17 07:54:16
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_z
 * Result: WA
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    double long n,i;
    double long ans=0;

    cin>>n;
    for(i=0;i<n;i++){
        ans+=n/(n-i);
    }

    cout<<ans<<endl;
    return 0;

}