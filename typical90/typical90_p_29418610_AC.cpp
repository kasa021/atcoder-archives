/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29418610
 * Submitted at: 2022-02-19 06:59:18
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_p
 * Result: AC
 * Execution Time: 426 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long n,a,b,c;
long long ans=9999;
int main(){
    cin>>n>>a>>b>>c;

    
    long long ans=9999; //LLは多分int とlong  long 型で計算するから書いてる
    for(long long  i=0;i<=9999;i++){
        for(long long  j=0;j+i<=9999;j++){
            long long v=n-i*a-j*b;
            long long r=i+j+v/c;
            if(v%c!=0||v<0||r>9999) continue;
            ans=min(ans,r);
                }
    }

    cout<<ans<<endl;

    return 0;

}
