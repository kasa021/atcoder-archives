/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31181471
 * Submitted at: 2022-04-23 12:13:46
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
  int a,b,c,d,e,f,x;
  cin>>a>>b>>c>>d>>e>>f>>x;
  int y = x;
  int p =0,q =0;
  while(x>=0){
     if(x-a>=0) p+=a*b;
     x=x-a-c;
  }
   while(y>=0){
     if(y-d>=0) q+=d*e;
     y=y-d-f;
  }

  if(p>q) cout<<"Takahashi"<<endl;
  else if(p<q) cout<<"Aoki"<<endl;
  else if(p==q) cout<<"Draw"<<endl;
  return 0;



    }