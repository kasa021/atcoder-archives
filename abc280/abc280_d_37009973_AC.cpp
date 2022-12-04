/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/37009973
 * Submitted at: 2022-12-04 04:13:43
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: AC
 * Execution Time: 21 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif


using namespace std;
using ll = long long ;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

vector<P> primef(ll n){
    ll x=n;
    vector<P> res;
    for(ll i=2;i*i<=n;i++){
        ll cnt=0;
        if(x%i) continue;
        while(x%i==0){
            cnt++;
            x/=i;
        }
        res.push_back(P(i,cnt));
    }
    if(x!=1) res.push_back(P(x,1));
    return res;
}

ll f(ll n,ll p){
    if(n==0) return 0;
    n/=p;
    return n+f(n,p);
}
int main(){
    ll k;
    cin>>k;
    vector<P> r=primef(k);
    // for(auto [v,vv]:r){
    //     cout<< v<<" "<<vv << endl;
    // }

    ll ac=k,wa=0;
    while(ac-wa>1){
        ll mid=(ac+wa)/2;
        bool ok=true;
        for(auto [p,cnt]: r){
            if(f(mid,p)< cnt) ok = false;
        }
        if(ok) ac=mid;
        else wa=mid;
    }
    cout<< ac << endl;
    }
