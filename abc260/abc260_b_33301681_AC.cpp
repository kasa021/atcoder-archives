/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33301681
 * Submitted at: 2022-07-17 12:20:01
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int a[n],b[n];
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    int c[n];
    rep(i,n) c[i]=a[i]+b[i];
    vector<int> p;
    int max,indx=-1;;
    for(int i=0;i<x;i++){
        max=-1;
        rep(i,n){
        if(max<a[i]){
            max=a[i];
            indx=i;
        }
        }
        p.push_back(indx);
        a[indx]=-1;
        b[indx]=-1;
        c[indx]=-1;
    }

    for(int i=0;i<y;i++){
        max=-1;
        rep(i,n){
        if(max<b[i]){
            max=b[i];
            indx=i;
        }
        }
        p.push_back(indx);
        a[indx]=-1;
        b[indx]=-1;
        c[indx]=-1;
    }

    for(int i=0;i<z;i++){
        max=-1;
        rep(i,n){
        if(max<c[i]){
            max=c[i];
            indx=i;
        }
        }
        p.push_back(indx);
        
        c[indx]=-1;
    }

    sort(p.begin(),p.end());
    for(auto q:p) cout<<q+1<<endl;
    return  0;

}