/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29418556
 * Submitted at: 2022-02-19 06:57:28
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

    
    long long ans=(1LL<<30); //LLは多分int とlong  long 型で計算するから書いてる
    for(int i=0;i<=9999;i++){
        for(int j=0;j+i<=9999;j++){
            long long v=n-1LL*i*a-1LL*j*b;
            long long r=1LL*i+1LL*j+v/c;
            if(v%c!=0LL||v<0||r>9999LL) continue;
            ans=min(ans,r);
                }
    }

    cout<<ans<<endl;

    return 0;

}
