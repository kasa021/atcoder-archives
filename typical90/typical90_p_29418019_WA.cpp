/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29418019
 * Submitted at: 2022-02-19 06:36:19
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_p
 * Result: WA
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long n,a,b,c;
long long ans=99999;
int main(){
    cin>>n>>a>>b>>c;

    /*int l=9999;//合計枚数が9999以下という制約を使う
    for(long long i=n;i>=0;i--){
        for(long long j=n;i+j>=0;j--){
            for(long long k=n;k+i+j>=0;k--){
                if(a*i+b*j+c*k ==n) ans=min(ans,i+j+k);//これでもl^3-6回の計算で間に合わない
            }
        }
    }*/
    int l=9999;//合計枚数が9999以下という制約を使う
    for(long long i=n;i>=0;i--){
        for(long long j=n;i+j>=0;j--){
             int k=(n-a*i-b*j)/c;  //kは全探索しなくてもいい
                if(a*i+b*j+c*k ==n) ans=min(ans,i+j+k);//これでもl^3-6回の計算で間に合わない
            
        }
    }

    cout<<ans<<endl;

    return 0;

}
