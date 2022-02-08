/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29159315
 * Submitted at: 2022-02-08 06:37:09
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_l
 * Result: AC
 * Execution Time: 29 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >>n;

    for (long long i=2;i*i<=n;i++)
      if(n%i==0)
       return cout<<"No\n",0;
    return cout<<"Yes\n",0;
}