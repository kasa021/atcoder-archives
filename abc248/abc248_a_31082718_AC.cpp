/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31082718
 * Submitted at: 2022-04-18 10:09:21
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_a
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    string s;
    cin>>s;
    for(int i=0;i<10;i++){
        string x = to_string(i);
        if(s.find(x) == string::npos)
        cout<<x<<endl;
    }
    return 0;
}