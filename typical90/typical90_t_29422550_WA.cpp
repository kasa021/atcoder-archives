/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29422550
 * Submitted at: 2022-02-19 09:53:19
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_t
 * Result: WA
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long a;
long long b,c;


int main(){
  cin>>a>>b>>c;

  long long d =pow(c,b);

  
  if(a<d) printf("Yes\n");
  else printf("No\n");

 

 return 0;
}
