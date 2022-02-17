/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29392548
 * Submitted at: 2022-02-17 15:31:27
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: WA
 * Execution Time: 5514 ms
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

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
           for(int p=1;p<=h;p++){
                   b[i][j]+= a[i][p];
            }
        }   
 
    }
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
           for(int p=1;p<=h;p++){
                   b[i][j]+= a[p][j];
                }
           }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
           
                   b[i][j]+= a[i][j];
    
    }
    }

    for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (j >= 2) printf(" ");
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

