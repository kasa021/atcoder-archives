/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30440294
 * Submitted at: 2022-03-26 12:11:05
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int main(){
    cin>>a>>b>>c>>d;

    if(a<c) cout<<"Takahashi"<<endl;
    else if(a>c) cout<<"Aoki"<<endl;
    else if(a==c){
        if(b<=d) cout<<"Takahashi"<<endl;
        else cout<<"Aoki"<<endl;
    }

    return 0;

}