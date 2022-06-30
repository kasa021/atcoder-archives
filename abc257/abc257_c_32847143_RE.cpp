/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32847143
 * Submitted at: 2022-06-30 07:08:59
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_c
 * Result: RE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph <vector<vector<int>>

int main() {
    int n,m=1000000000,M=0;
    cin>>n;
    string s,t;
    cin>>s;
    int w[n];
    rep(i,n) cin>>w[i];
    rep(i,n) {
        m=min(m,w[i]);
        M=max(M,w[i]);
    } 
    //cout<<m<<" "<<M<<endl;
    int ans[M-m+4]={0};
    rep2(i,m-1,M+2){
        rep(j,n){
            if(i>w[j]){
                if(s[j]=='0') ans[i-m+1]++;
            }else{
                if(s[j]=='1') ans[i-m+1]++;
            }
        }
       // cout<<ans[i]<<endl;
    }
    int a=0;
    rep(i,M-m+4) a=max(a,ans[i]);
    cout<<a<<endl;
    return 0;

}