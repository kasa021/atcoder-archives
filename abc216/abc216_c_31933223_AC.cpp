/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/31933223
 * Submitted at: 2022-05-24 10:46:23
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll=long long;

int main() {
   ll n;
   cin>>n;
   string s="";
   while(n>0){
       if(n%2==1){
           s+="A";
           n--;
       }else if(n%2==0){
           s+="B";
           n/=2;
       }
   }
   reverse(s.begin(),s.end());
   cout<<s<<endl;
   return 0;

}