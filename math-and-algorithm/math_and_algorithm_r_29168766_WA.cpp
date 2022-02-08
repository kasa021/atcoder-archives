/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29168766
 * Submitted at: 2022-02-08 14:42:20
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_r
 * Result: WA
 * Execution Time: 34 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    vector<long long> a(200000);
    vector<int> b(4);

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];
   
    for(long long i=0;i<n;i++){
       switch(a[i]){
           case 100: b[0]++; break;
           case 200: b[1]++; break;
           case 300: b[2]++; break;
           case 400: b[3]++; break;   
       }
    }

    cout<<b[0]*b[3]+b[1]*b[2]<<endl;
    
}