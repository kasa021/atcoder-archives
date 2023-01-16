/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc183/submissions/38090633
 * Submitted at: 2023-01-16 04:11:58
 * Problem URL: https://atcoder.jp/contests/abc183/tasks/abc183_d
 * Result: AC
 * Execution Time: 128 ms
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
//typedef modint1000000007 mint;
int main(){
    ll n,w;
    cin>>n>>w;
    vector<ll> water(200009,0);
    rep(i,n){
        ll s,t,p;
        cin>>s>>t>>p;
        water[s]+=p;
        water[t]-=p;
    }
    rep(i,200000) water[i+1]+=water[i];
    bool ans=true;
    rep(i,200000) if(water[i]>w) ans=false;
    cout << (ans ? "Yes" : "No") << endl;
    }
