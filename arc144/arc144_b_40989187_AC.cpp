/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/40989187
 * Submitted at: 2023-04-28 02:10:14
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_b
 * Result: AC
 * Execution Time: 187 ms
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
//typedef modint1000000007 mint;


int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    ll l=*min_element(all(v));
    ll r=*max_element(all(v))+1;
    while(r-l>1){
        ll mid=(l+r)/2;
        ll t=0;
        rep(i,n){
            if(v[i]>mid){
                t-=(v[i]-mid)/b;
            }else {
                t+=(mid-v[i]+a-1)/a;
            }
        }
        (t<=0 ? l:r) = mid;
    }
    cout<< l << endl;
    }
