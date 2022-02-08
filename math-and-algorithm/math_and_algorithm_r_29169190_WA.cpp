/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169190
 * Submitted at: 2022-02-08 15:04:02
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_r
 * Result: WA
 * Execution Time: 38 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long A[200001];
    int  a=0,b=0,c=0,d=0;

    cin>>n;
    for(long long i=0;i<n;i++) cin>>A[i];
   
    for(long long i=0;i<n;i++){
       if(A[i]==100)a++;
       if(A[i]==200)b++;
       if(A[i]==300)c++;
       if(A[i]==400)d++;
    }

    cout<<a*d+b*c<<endl;
    
    return 0;
    
}