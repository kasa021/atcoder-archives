/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29417773
 * Submitted at: 2022-02-19 06:26:15
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_p
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long n,a,b,c;
long long ans=99999;
int main(){
    cin>>n>>a>>b>>c;

    for(long long i=n;i>=0;i--){
        for(long long j=n;j>=0;j--){
            for(long long k=n;k>=0;k--){
                if(a*i+b*j+c*k ==n) ans=min(ans,i+j+k);
            }
        }
    }

    cout<<ans<<endl;

    return 0;

}