/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31663634
 * Submitted at: 2022-05-14 12:10:13
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    string s,p;
    cin>>s;
    p=s;
    if(s.size()==1) rep(i,5) s+=p;
    else if(s.size()==2) rep(i,2) s+=p;
    else if(s.size()==3) rep(i,1) s+=p;
    cout<<s<<endl;
    return 0;

}