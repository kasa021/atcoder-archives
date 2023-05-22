/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/41618002
 * Submitted at: 2023-05-22 02:36:07
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: AC
 * Execution Time: 161 ms
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
                a=(a+n)%(2*n);
                b=(b+n)%(2*n);
            }
            swap(s[a],s[b]);
        }else{
            rev=!rev;
        }
    }
    if(rev){
        s=s.substr(n,n)+s.substr(0,n); 
    }
    cout<<s<<endl;
}
