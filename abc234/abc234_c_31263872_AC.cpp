/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/31263872
 * Submitted at: 2022-04-25 09:35:23
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    ll k;
    cin>>k;
    string s;
    while(k>0){
        s += '0'+(k%2)*2;
        k /=2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;


}