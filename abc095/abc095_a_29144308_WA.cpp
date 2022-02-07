/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/29144308
 * Submitted at: 2022-02-07 09:14:59
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/abc095_a
 * Result: WA
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int count =0;

    for (int i=0;i<3;i++){
        if(s[i]=='o') ++count;
             
    }
    cout<<count<<endl;
}