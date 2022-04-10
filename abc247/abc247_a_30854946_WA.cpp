/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30854946
 * Submitted at: 2022-04-10 12:09:25
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    string s;
    cin>>s;
    
    for(int i=3;i>0;i--){
    if(s[i-1] == '0') s[i]='0';
    else s[i]='1';
    }
    s[0]='0';


    for(int i=0;i<4;i++) cout<<s[i]<<endl;

}