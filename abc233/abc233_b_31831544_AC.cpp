/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/31831544
 * Submitted at: 2022-05-21 11:24:01
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int l,r;
    string s;
    cin>>l>>r>>s;
    l--;r--;
    int p=l,q=r;
    while(p<q){
        swap(s[p],s[q]);
        p++;q--;
    }
    cout<<s<<endl;
    return 0;
}