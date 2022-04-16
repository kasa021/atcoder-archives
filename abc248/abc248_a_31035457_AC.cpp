/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31035457
 * Submitted at: 2022-04-16 13:10:05
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_a
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    string s;
    cin>>s;
    int ans =0;
    int pp=45;
    rep(i,9){
            if(s[i] == '0') ans +=0;
            if(s[i] == '1') ans +=1;
            if(s[i] == '2') ans +=2;
            if(s[i] == '3') ans +=3;
            if(s[i] == '4') ans +=4;
            if(s[i] == '5') ans +=5;
            if(s[i] == '6') ans +=6;
            if(s[i] == '7') ans +=7;
            if(s[i] == '8') ans +=8;
            if(s[i] == '9') ans +=9;
          
        }
    
    
    pp = pp-ans;
   cout<<pp<<endl;
    return 0;


}