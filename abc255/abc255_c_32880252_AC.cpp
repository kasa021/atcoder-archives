/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32880252
 * Submitted at: 2022-07-02 06:48:46
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,a,d,n;
  cin >> x >> a >> d >> n;
  if(d<0){
    long long fi=a+d*(n-1);
    a=fi;
    d*=-1;
  }
  long long st=a;
  long long fi=a+d*(n-1);
  if(st<=x && x<=fi){
    long long m;
    if(d!=0){m=(x-st)%d;}
    else{m=0;}
    cout << min(m,d-m) << '\n';
  }
  else if(x<st){cout << st-x << '\n';}
  else{cout << x-fi << '\n';}
  return 0;
}