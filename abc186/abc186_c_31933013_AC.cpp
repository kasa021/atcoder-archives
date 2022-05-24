/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/31933013
 * Submitted at: 2022-05-24 10:32:14
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_c
 * Result: AC
 * Execution Time: 59 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

string lo(int n){
  string s;
  while(n){
    s = to_string(n%8) + s;
    n /= 8;
  }
  return s;
}


int main() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        bool p=false,q=false;
       int t=stoi(lo(i));
       
       int a=i;
       while(a>1){
           if(a%10==7) {
               p=true;
               break;
               }
           a/=10;
       }
       while(t>1){
           if(t%10==7){
               q=true;
               break;
           }
           t/=10;
       }
       if(p==false&&q==false) ans++;
    }
    cout<<ans<<endl;
    return 0;

}