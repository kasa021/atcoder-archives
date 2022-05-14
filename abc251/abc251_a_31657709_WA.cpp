/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31657709
 * Submitted at: 2022-05-14 12:02:43
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    string s;
    cin>>s;
    while(s.size()<6){
        s+=s;
    }
    cout<<s<<endl;
    return 0;

}