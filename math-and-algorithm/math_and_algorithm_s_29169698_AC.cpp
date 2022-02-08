/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169698
 * Submitted at: 2022-02-08 15:30:26
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_s
 * Result: AC
 * Execution Time: 64 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[500001];
    long long p=0,q=0,r=0;

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];

    for (long long i=0;i<n;i++){
       if(a[i]==1) p++;
       if(a[i]==2) q++;
       if(a[i]==3) r++;
    }

    cout<<p*(p-1)/2+q*(q-1)/2+r*(r-1)/2<<endl;
}