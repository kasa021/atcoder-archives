/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38055274
 * Submitted at: 2023-01-15 12:23:05
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_c
 * Result: AC
 * Execution Time: 8 ms
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
//typedef modll1000000007 mll;
int main(){
    string s;
    cin>>s;
    ll size=s.size()-1;
    //cout<< size << endl;
    ll ans=1,now=0;
    rep(i,size){
        ans*=26;
    }
    now=ans;
    rep(i,size+1){
        if(i==0)ans+=(now*(s[i]-'A'));
        else {
            ans+=(now*((s[i]-'A')+1));
        }
        now/=26;
    }
    cout<< ans << endl;
    }
