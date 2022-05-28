/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32019989
 * Submitted at: 2022-05-28 12:22:46
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(i%a!=0&&i%b!=0) ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}