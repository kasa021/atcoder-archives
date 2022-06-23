/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32666838
 * Submitted at: 2022-06-23 02:22:17
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b[5]={0};
    b[0]=1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            b[0]=1;
            b[4]+=b[3];
            b[3]=b[2];
            b[2]=b[1];
            b[1]=b[0];
            b[0]=0;
            //cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<endl;
        }
        if(a[i]==2){
            b[0]=1;
            b[4]+=b[3];
            b[4]+=b[2];
            b[3]=b[1];
            b[2]=b[0];
            b[1]=0;
            b[0]=0;
              //cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<endl;
        }
        if(a[i]==3){
             b[0]=1;
            b[4]+=b[3];
            b[4]+=b[2];
            b[4]+=b[1];
            b[3]=b[0];
            b[2]=0;
            b[1]=0;
            b[0]=0;
 //cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<endl;
        }
        if(a[i]==4){
             b[0]=1;
            b[4]+=b[3];
            b[4]+=b[2];
            b[4]+=b[1];
            b[4]+=b[0];
            b[3]=0;
            b[2]=0;
            b[1]=0;
            b[0]=0;
           //cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<endl;
        }
    }

    cout<<b[4]<<endl;

}