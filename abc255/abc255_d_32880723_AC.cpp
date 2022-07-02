/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32880723
 * Submitted at: 2022-07-02 07:13:36
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_d
 * Result: AC
 * Execution Time: 466 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(auto &nx:a) cin>>nx;
    sort(a.begin(),a.end());

    vector<ll> rw(n+1,0);
    for(ll i=0;i<n;i++) rw[i+1]=rw[i]+a[i];
    for(int i=0;i<q;i++){
        ll x;
        cin>>x;
        int st=0,fi=n-1;
        while(st<=fi){
            int te=(st+fi)/2;
            if(a[te]<x) st=te+1;
            else fi=te-1;
        }
        ll res=x*st;
        res-=rw[fi+1];
        res+=(rw[n]-rw[st]);
        res-=x*(n-st);
        cout<<res<<endl;
    }
    return 0;
}