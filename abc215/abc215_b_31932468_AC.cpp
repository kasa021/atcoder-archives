/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/31932468
 * Submitted at: 2022-05-24 09:49:48
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    long long n,k,ans;
    cin>>n;
    ans=1;
    k=0;
   while(ans<=n){
       ans=2*ans;
       k++;
   }
   cout<<k-1<<endl;
   return 0;
}