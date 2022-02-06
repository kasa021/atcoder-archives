/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134325
 * Submitted at: 2022-02-06 15:45:50
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   int a[50];
   int sum;

   cin>>n;
   sum=0;
   for(int i=0;i<n;i++){
       cin>>a[i];
       sum+=a[i];
   }
   cout<<sum<<endl;
  }
