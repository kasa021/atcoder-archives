/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29436517
 * Submitted at: 2022-02-19 12:08:33
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double long h,ans;

int main(){
   cin>>h;

   ans = sqrt(h*(12800000+h));

   printf("%.3Lf\n", ans);

   return 0;
}
