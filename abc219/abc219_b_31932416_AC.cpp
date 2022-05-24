/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/31932416
 * Submitted at: 2022-05-24 09:46:10
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
   string s[10];
   string t;
   rep(i,3) cin>>s[i];
   cin>>t;
   string ans;
   for(int i=0;i<t.size();i++){
       if(t[i]=='1') ans+=s[0];
       if(t[i]=='2') ans+=s[1];
       if(t[i]=='3') ans+=s[2];
   }
   cout<<ans<<endl;
   
}