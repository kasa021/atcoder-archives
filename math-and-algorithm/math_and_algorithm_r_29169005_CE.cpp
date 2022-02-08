/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29169005
 * Submitted at: 2022-02-08 14:54:01
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_r
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    vector<long long> a(200000);
    int a=0,b=0,c=0,d=0;

    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];
   
    for(long long i=0;i<n;i++){
       switch(a[i]){
           case 100: a++; break;
           case 200: b++; break;
           case 300: c++; break;
           case 400: d++; break;   
       }
    }

    cout<<a*d+b*c<<endl;
    
}