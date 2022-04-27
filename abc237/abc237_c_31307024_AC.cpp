/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/31307024
 * Submitted at: 2022-04-27 13:24:09
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_c
 * Result: AC
 * Execution Time: 30 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    string s;
    cin>>s;
    bool ans = true;
    int i=0,j=s.size() - 1;
    while(i<j){
        if(s[j] == s[i]) {i++;j--;}
        else if(s[j] == 'a') j--;
        else {ans=false; break;}
    }
    if(ans ==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}