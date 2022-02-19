/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29459473
 * Submitted at: 2022-02-19 12:53:34
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long a,b;
long long c,d;
long long e,f,g,h,i,j,k,l;
int main(){
     cin>>a>>b>>c>>d;

     e=(a+1-c)*(a+1-c)+(b+2-d)*(b+2-d);
     f=(a+2-c)*(a+2-c)+(b+1-d)*(b+1-d);
     g=(a+2-c)*(a+2-c)+(b-1-d)*(b-1-d);
     h=(a+1-c)*(a+1-c)+(b-2-d)*(b-2-d);
     i=(a-1-c)*(a-1-c)+(b-2-d)*(b-2-d);
     j=(a-2-c)*(a-2-c)+(b-1-d)*(b-1-d);
     k=(a-2-c)*(a-2-c)+(b+1-d)*(b+1-d);
     l=(a-1-c)*(a-1-c)+(b+2-d)*(b+2-d);

     if(e==5||f==5||g==5||h==5||i==5||j==5||k==5||l==5) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;

     return 0;
}
