/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc156/submissions/38996343
 * Submitted at: 2023-02-19 02:53:42
 * Problem URL: https://atcoder.jp/contests/arc156/tasks/arc156_b
 * Result: RE
 * Execution Time: 189 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
typedef modint998244353 mint;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    vector<mint> fact(200009,1);
    rep1(i,1,200001){
        fact[i]=fact[i-1]*i;
    }
    auto nCr = [&](int n,int r){
        return fact[n]/fact[r]/fact[n-r];
    };
    int cnt=0;
    mint ans=0;
    rep(i,n+k){
        if(k-cnt-1+i<i) break;
        ans+=nCr(k-cnt-1+i,i);
        if(!a[i]) cnt++;
    }
    cout<< ans.val() << endl;
    }
