/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/34137000
 * Submitted at: 2022-08-19 04:29:11
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;


int main() {
    int n,m,x;
    cin>>n>>m>>x;
    int c[n],a[n][m];
    rep(i,n){
        cin>>c[i];
        rep(j,m){
            cin>>a[i][j];
        }
    }
    int cnt=0, mi=10000000;
    
    for(int i=0;i<(1<<n);i++){
        cnt=0; 
        vector<int> rikai(m);
        for(int j=0;j<n;j++){
            if(i&(1<<j)) {
                cnt+=c[j];
                rep(k,m)rikai[k]+=a[j][k];
            }
        }
        bool flg=true;
        rep(k,m){
           if(rikai[k]<x) flg=false;
        }
        if(flg) mi=min(mi,cnt);
        //cout<<mi<<" "<<cnt<<endl;
    }
    if(mi==10000000) mi=-1;
    cout<<mi<<endl;
    return 0;

}