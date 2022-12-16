/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/37300397
 * Submitted at: 2022-12-16 09:09:54
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_d
 * Result: AC
 * Execution Time: 260 ms
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

int main(){ 
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n+9),diff(n+9);
    a[0]=0;
    rep1(i,1,n+1) cin>>a[i];
    rep(i,n) {
        diff[i]=a[i+1]-a[i]-1;
        //cout<< diff[i] << endl;
    }
    vector<ll> cs(n + 1);
    cs[0] = 0;
    for (int i = 0; i < n; i++)
        cs[i + 1] = cs[i] + diff[i];

    //for(auto v:cs) cout<< v << endl;

    rep(i,q){
        ll k;
        cin>>k;
        auto idx=distance(cs.begin(),lower_bound(all(cs),k)-1);
        cout<< a[idx]+abs(cs[idx]-k) << endl;
    }
    


    }
