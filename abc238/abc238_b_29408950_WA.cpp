/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29408950
 * Submitted at: 2022-02-18 15:36:08
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_b
 * Result: WA
 * Execution Time: 17 ms
 */

#include <bits/stdc++.h>
using namespace std;

int n;
int p[370]; //入力される配列
int a[370]; //今何度にいるかを確認する配列
int b[370]; //角度を求める配列

int main(){
    
    
    //入力
    cin>>n;
    for(int i=1;i<=n;i++) cin>>p[i];

    a[1]=0; a[2]=p[1];
    for(int i=2;i<=n;i++){
        if(p[i]+a[i-1] >= 360) a[i] = (p[i] + a[i-1])%360;
        if(p[i]+a[i-1] < 360)  a[i] = (p[i] + a[i-1]);
    }

    sort(a+1,a+n+1);

    for(int i=1;i<n;i++){
        b[i]=a[i+1]-a[i];
    }
    b[n]=360-a[n];
    sort(b+1,b+n+1);
    cout<<b[n]<<endl;

    return 0;

}