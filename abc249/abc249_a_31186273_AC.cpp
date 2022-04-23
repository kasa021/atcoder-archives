/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31186273
 * Submitted at: 2022-04-23 12:20:42
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_a
 * Result: AC
 * Execution Time: 6 ms
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
  int p =0,q =0,ansa=0,ansb=0;
  while(x>=0){
     if(x-a>=0) p+=a;
     else p+=x;
     x=x-a-c;
  }
  ansa=p*b;
   while(y>=0){
     if(y-d>=0) q+=d;
     else q+=y;
     y=y-d-f;
  }
  ansb=q*e;

  if(ansa>ansb) cout<<"Takahashi"<<endl;
  else if(ansa<ansb) cout<<"Aoki"<<endl;
  else if(ansa==ansb) cout<<"Draw"<<endl;
 
  return 0;



    }