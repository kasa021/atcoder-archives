/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/31288459
 * Submitted at: 2022-04-26 13:22:46
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    ll n,x,i,j,ans=0;
    x=10;
    j=1;
    cin>>n;
    for( i=1;i<=n;i++){
        if(i==x){
            j=1;
            x*=10;
        }
        ans+=j;
        j++;
    }
    ans=ans%998244353;
    cout<<ans<<endl;
    return 0;
}