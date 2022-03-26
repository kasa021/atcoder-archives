/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30439778
 * Submitted at: 2022-03-26 12:10:32
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
 * Result: WA
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int main(){
    cin>>a>>b>>c>>d;

    if(a<c) cout<<"Takahashi"<<endl;
    else if(a>c) cout<<"Aoki"<<endl;
    else if(a=c){
        if(b<=d) cout<<"Takahashi"<<endl;
        else cout<<"Aoki"<<endl;
    }

    return 0;

}