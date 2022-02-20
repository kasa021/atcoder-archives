/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29511021
 * Submitted at: 2022-02-20 12:04:44
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    if(a-1 ==b||a+1==b||a+9==b||a-9==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
