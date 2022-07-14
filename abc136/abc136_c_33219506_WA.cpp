/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33219506
 * Submitted at: 2022-07-14 10:01:40
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: WA
 * Execution Time: 43 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using ll = long long ;

int main() {
    int n;
    cin>>n;
    int h[n];
    rep(i,n) cin>>h[i];
    int f=1;
    rep(i,n-1){
        if(f==0){
            cout<<"No"<<endl;
            return 0;
        }
        if(h[i]==h[i+1]+1){
            if(i>0){
                if(h[i-1]<h[i]) h[i]--;
                else{f=0;}
            }else{
                if(h[i-1]<h[i]) h[i]--;
            }
        }
        if(h[i]>h[i+1]) f=0;
    }
    if(f==0){
            cout<<"No"<<endl;
            return 0;
        }
    cout<<"Yes"<<endl;
   // rep(i,n)cout<<h[i]<<" ";
    return 0;
}