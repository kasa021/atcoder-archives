/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29384205
 * Submitted at: 2022-02-17 07:13:33
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_y
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[200009], b[200009];
    double long p=0,q=0;

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];
    for(long long i=0;i<n;i++) cin>>b[i];

    for (long long i=0;i<n;i++) p+=a[i];
    for(long long i=0;i<n;i++) q+=2*b[i];

    cout<<(p+q)/3<<endl;

    return 0;
}