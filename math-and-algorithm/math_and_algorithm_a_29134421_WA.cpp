/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134421
 * Submitted at: 2022-02-06 15:53:57
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    int a[50];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    int b= sum%100; 
    cout<<b<<endl;
}