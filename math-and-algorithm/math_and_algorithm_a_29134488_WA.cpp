/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134488
 * Submitted at: 2022-02-06 15:58:57
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    int a;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }

    int b; 
    b= sum % 100; 
    cout<<b<<endl;

    
}