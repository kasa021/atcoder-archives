/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/41618147
 * Submitted at: 2023-05-22 02:45:28
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: AC
 * Execution Time: 164 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    string s;
    cin>>n>>s>>q;
    bool rev=false;
    while(q--){
        int t,a,b;
        cin>>t>>a>>b;
        a--;b--; // 0-indexed
        if(t==1){
            if(rev){
                a=(a+n)%(2*n);  // 実験してどうなるか確認してみて
                b=(b+n)%(2*n);
            }
            swap(s[a],s[b]);
        }else{
            rev=!rev;
        }
    }
    if(rev){ // 前半後半が入れ替わっているとき
        s=s.substr(n,n)+s.substr(0,n);  // substr(開始位置,文字数)
                                        //substrについては調べてみて
    }
    cout<<s<<endl;
}
