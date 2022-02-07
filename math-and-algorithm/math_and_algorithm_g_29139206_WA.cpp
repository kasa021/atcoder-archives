/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29139206
 * Submitted at: 2022-02-07 03:41:18
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_g
 * Result: WA
 * Execution Time: 14 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x,y;
    int a,i;

    cin>>n;
    cin>>x;
    cin>>y;

    for (i=0;i<n;i++){
        if(i%x==0)
           a++;
    }

    for(i=0;i<n;i++){
        if(i%y==0)
          a++;
    }

    cout<<a<<endl;

}