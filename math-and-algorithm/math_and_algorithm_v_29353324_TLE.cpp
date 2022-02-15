/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29353324
 * Submitted at: 2022-02-15 11:36:35
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_v
 * Result: TLE
 * Execution Time: 1103 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long a[200001];
    long long ans=0;

    cin>>n;
    for (long long i=0; i<n;i++)
     cin>>a[i];

    for(long long i=0; i<=n; i++){
        for(long long j=i+1;j<=n; j++){ //iと被らないようにj=i+1とする
            if(a[i]+a[j] == 100000) ans+=1;
           
        }
    }

    cout<<ans<<endl;
}