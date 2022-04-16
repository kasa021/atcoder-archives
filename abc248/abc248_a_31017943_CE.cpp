/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31017943
 * Submitted at: 2022-04-16 12:15:53
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
        int num[i]=stoi(s[i]);
        ans += num[i];
    }

    cout<<x-ans<<endl;

    return 0;



}