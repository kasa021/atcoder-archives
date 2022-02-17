/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29392365
 * Submitted at: 2022-02-17 15:19:41
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    int a[2009][2009], b[2009][2009];

    cin>>h>>w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++) cin>>a[i][j];
    }

    for(int a=1;a<=h;a++){
        for(int b=1;b<=w;b++){
           for(int i=1;i<=h;i++){
                   b[a][b]+= a[a][i];
              }
    }
 
    }
    for(int a=1;a<=h;a++){
        for(int b=1;b<=w;b++){
           for(int i=1;i<=h;i++){
                   b[a][b]+= a[i][b];
              }
    }
    }
    for(int a=1;a<=h;a++){
        for(int b=1;b<=w;b++){
            b[a][b]-=a[a][b];
            cout<<b[a][b]<<"";
        }

    return 0;

}
