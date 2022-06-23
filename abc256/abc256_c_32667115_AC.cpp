/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32667115
 * Submitted at: 2022-06-23 02:45:49
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int h[4],w[4];
    for(int i=1;i<=3;i++) cin>>h[i];
    for(int i=1;i<=3;i++) cin>>w[i];
    int a[4][4];
    int ans=0,s;
    for(int i=1;i<=28;i++){
        for(int j=1;j<=29-i;j++){
            for(int k=1;k<=29-i;k++){
                for(int l=1;l<=29-j;l++){
                    a[1][1]=i;
                    a[1][2]=j;
                    a[2][1]=k;
                    a[2][2]=l;
                    a[1][3]=h[1]-a[1][1]-a[1][2];
                    a[2][3]=h[2]-a[2][1]-a[2][2];
                    a[3][1]=w[1]-a[1][1]-a[2][1];
                    a[3][2]=w[2]-a[1][2]-a[2][2];
                    a[3][3]=w[3]-a[1][3]-a[2][3];
                    s=h[3]-a[3][1]-a[3][2];
                    if(a[1][3]>0&&a[2][3]>0&&a[3][1]>0&&a[3][2]>0&&a[3][3]>0&&s==a[3][3]) {
                        ans++;
                        
                    }
                }
            }

        }

    }
    cout<<ans<<endl;
    return 0;

}