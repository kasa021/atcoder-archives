/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29417225
 * Submitted at: 2022-02-19 06:04:20
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_n
 * Result: AC
 * Execution Time: 76 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long N;
long long A[100009];
long long B[100009];
long long ans=0;
int main(){
    cin>>N;
    for(long long i=1;i<=N;i++) cin>>A[i];
    for(long long i=1;i<=N;i++) cin>>B[i];

    sort(A+1,A+N+1);
    sort(B+1,B+N+1);

    for(long long i=1;i<=N;i++){
        ans +=abs(A[i]-B[i]);
    }

    cout<<ans<<endl;

    return 0;

}