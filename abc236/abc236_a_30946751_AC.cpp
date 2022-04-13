/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/30946751
 * Submitted at: 2022-04-13 10:34:48
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
   
   string s;
   int a, b;
   cin>>s>>a>>b;

   char tmp=s[a-1];
   s[a-1] = s[b-1];
   s[b-1] = tmp;

    cout<<s<<endl;
    return 0;
}