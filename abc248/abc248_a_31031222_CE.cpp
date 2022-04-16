/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31031222
 * Submitted at: 2022-04-16 12:54:10
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_a
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    string s;
    cin>>s;
    vector<int> a[10];
    rep(i,10) a[i] =0;
    rep(i,10){
        rep(j,10){
            if(s[i] != 'j') a[j] = 1; 
        }
    }

    rep(i,10){
        if(a[i] == 1) cout<<s[i]<<endl;
    }
    return 0;


}