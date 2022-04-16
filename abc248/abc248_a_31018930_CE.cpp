/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31018930
 * Submitted at: 2022-04-16 12:17:46
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
    vector<int> num(10);
    int ans=0,x=45;
    
    rep(i,10){
         num=stoi(s);
        //ans += num[i];
    }
    rep(i,10) ans += num[i];

    cout<<x-ans<<endl;

    return 0;



}