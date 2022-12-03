/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36986116
 * Submitted at: 2022-12-03 13:02:50
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: WA
 * Execution Time: 19 ms
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
bool isprime(ll x){
    ll i;
    for(ll i=2;i*i<=x;i++){
       if(x%i==0) return false;
    }
    return true;
}

vector<pair<ll, ll> > primediv(ll N) {
    vector<pair<ll, ll> > res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(){
       ll k;
       ll now=1,ans=1,m=0;
       cin>>k;
    //    if(isprime(k)){
    //     cout<< k << endl;
    //     return 0;
    //    }

       vector<P> r=primediv(k);
       sort(all(r));
       rep(i,(int)r.size()){
        now=0;
        ll j=1;
        //cout<< r[i].first<<" "<<r[i].second << endl;
        while(now<r[i].second){
            now+=j;
            j++;
        }
        ll t=1;
        rep(k,j-1){
            t*=r[i].first;
        }
        m=max(m,t);
        //cout<< m << endl;
       }
       cout<< m << endl;

       
    //    rep1(i,1,k){
    //     now*=i;
    //     now%=k;
    //     if(now%k==0){
    //         cout<< i << endl;
    //         return 0;
    //     }
    //    }
    }
