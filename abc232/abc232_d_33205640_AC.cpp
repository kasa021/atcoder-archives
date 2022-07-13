/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/33205640
 * Submitted at: 2022-07-13 12:39:09
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_d
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;
#define al 0

int main(){
    int h,w;
    cin>>h>>w;
    vector<string> c(h);
    for(int i=0;i<h;i++){
        cin>>c[i];
    }
    vector<vector<int>> a(h,vector<int>(w,al));
    int m=0;
    a[0][0]=1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            m=max(m,a[i][j]);
            if(i==h-1&&j==w-1) break;
            if(j==w-1){
                if(c[i+1][j]=='.'){
                    if(a[i+1][j]<a[i][j]) a[i+1][j]=a[i][j]+1;
                }
            }
            else if(i==h-1){
                if(c[i][j+1]=='.'){
                    if(a[i][j+1]<a[i][j]) a[i][j+1]=a[i][j]+1;
                }
            }else{
                if(c[i][j+1]=='.'){
                    if(a[i][j+1]<a[i][j]) a[i][j+1]=a[i][j]+1;
                }
                if(c[i+1][j]=='.'){
                    if(a[i+1][j]<a[i][j]) a[i+1][j]=a[i][j]+1;
                }
            }
            m=max(m,a[i][j]);
        }
    }
    // rep(i,h){
    // rep(j,w){
    //     cout<<a[i][j]<<" ";
    // }
    // cout<<endl;
    // }
    cout<<m<<endl;
    return 0;
}