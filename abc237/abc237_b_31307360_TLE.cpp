/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/31307360
 * Submitted at: 2022-04-27 13:39:46
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_b
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
   int h,w;
   cin>>h>>w;
   int a[h][w];
   int b[w][h];

   for(int i=0;i<h;i++){
       for(int j=0;i<w;j++){
           cin>>a[i][j];
           
       }
   }
    for(int i=0;i<=w-1;i++){
        for(int j=0;j<=h-1;j++){
            b[i][j]=a[j][i];
        }
    }

    for(int i=0;i<h;i++){
       for(int j=0;i<w;j++){
        cout<<b[i][j]<<endl;
        if(j==h-1) printf("\n");
       }
    }
    return 0;
}