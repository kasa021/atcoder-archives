/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/38317935
 * Submitted at: 2023-01-25 10:03:33
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_d
 * Result: WA
 * Execution Time: 281 ms
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
    ll n,now=0;
    cin>>n;
    set<ll> st;
    map<ll,ll> mp;
    rep(i,n){
        ll p;
        cin>>p;
        if(p==1){
            ll x;
            cin>>x;
            st.insert(x);
            mp[x]++;
        }else if(p==2){
            ll x;
            cin>>x;
            now+=x;
        }else{
            ll a=*st.begin();
            cout<< a+now << endl;
            mp[a]--;
            if(mp[a]==0) st.erase(a);
        }
    }
    
    }
