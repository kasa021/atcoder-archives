/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29392459
 * Submitted at: 2022-02-17 15:25:30
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    int a[2009][2009];
    int b[2009][2009];

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
                   b[a][b]-=a[a][b];
                   if (b >= 2) printf(" ");
			printf("%d", Answer[a][b]);
              }
              printf("\n");
    }
    }
    

    return 0;

}
