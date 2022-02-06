/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134468
 * Submitted at: 2022-02-06 15:57:23
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    int a;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }

    int b = sum % 100; 
    cout<<b<<endl;

    return 0;
}