/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/30841983
 * Submitted at: 2022-04-10 08:24:17
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_b
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int h,w;
    cin>>h>>w;
    vector a(h,vector<int>(w));
    rep(i,h)rep(j,w) cin>>a[i][j];
    vector b(w,vector<int>(h));
    rep(i,h)rep(j,w) b[j][i]=a[i][j];
    rep(j,w)]{
     rep(i,h){
        if(i=!0)cout<<' ';
        cout<<b[i][j];
    }
    cout<<endl;
    }

    

   

}