/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/32083227
 * Submitted at: 2022-05-29 12:12:17
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_d
 * Result: TLE
 * Execution Time: 2296 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep2(i,n) for(int i=0; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;
#define mod 998244353

int main(){
    ll q;
    cin>>q;
    queue<ll> qq;
    while(q--){
        ll p;
        cin>>p;
        if(p==1){
            ll x,c;
            cin>>x>>c;
            while(c--){
                qq.push(x);
            }
        }else if(p==2){
            ll c,sum=0;
            cin>>c;
            while(c--){
                sum+=qq.front();
                qq.pop();
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}