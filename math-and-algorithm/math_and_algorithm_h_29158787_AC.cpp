/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29158787
 * Submitted at: 2022-02-08 06:03:05
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_h
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    long long count =0;

    cin>>n>>s;

    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        if (i+j<=s)count++;

    cout<<count<<endl;
}