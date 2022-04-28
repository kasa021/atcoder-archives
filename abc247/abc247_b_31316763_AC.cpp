/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/31316763
 * Submitted at: 2022-04-28 04:47:00
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<string> s(n),t(n);
   for(int i = 0; i<n;i++){
       cin>>s[i]>>t[i];
   } 
int a,b;
   for(int i = 0;i<n;i++){
        a=0;b=0;
       for(int j=0;j<n;j++){
           if(i==j) continue;
          if(s[i]== s[j]||s[i]==t[j]){
              a++;
           }
          if(t[i]== t[j]||t[i]==s[j]){
              b++;
          }   
        }
        if(a&&b) {
            cout<<"No"<<endl;
            return 0;
        }
   }

    cout<<"Yes"<<endl;
   return 0;
   

}