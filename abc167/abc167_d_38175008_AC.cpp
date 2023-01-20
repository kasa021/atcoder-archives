/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/38175008
 * Submitted at: 2023-01-20 14:49:12
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_d
 * Result: AC
 * Execution Time: 197 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;
using ull=unsigned long long;
//typedef modll1000000007 mll;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n) {
        cin>>a[i];
        a[i]--;
    }
    vector<vector<ll>> d(100,vector<ll>(n+9,0));

    rep(i,n) d[0][i]=a[i];
    rep(j,80){
        rep(i,n){
            d[j+1][i]=d[j][d[j][i]];
        }
    }

    int i=0,now=0;
    while(k){
        if(k & 1ll){
            now=d[i][now];
        }
        i++;
        k>>=1;
    }
    cout<< now+1 << endl;

    }
