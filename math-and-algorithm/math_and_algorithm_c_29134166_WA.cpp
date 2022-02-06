/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134166
 * Submitted at: 2022-02-06 15:36:03
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_c
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    int a;
    
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>a;
        a+=a;
    }

    cout<<a<<endl;

  }