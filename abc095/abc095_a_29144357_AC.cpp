/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/29144357
 * Submitted at: 2022-02-07 09:17:34
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/abc095_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=700;

    int count =0;

    for (int i=0;i<3;i++){
        if(s[i]=='o') ++count;
             
    }
    cout<<100*count+a<<endl;
}