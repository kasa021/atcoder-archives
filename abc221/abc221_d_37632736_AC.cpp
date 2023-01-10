/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/37632736
 * Submitted at: 2022-12-30 09:13:35
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_d
 * Result: AC
 * Execution Time: 440 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
// typedef modll1000000007 mll;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll> mp;
    vector<ll> date;
    set<ll> st;
    date.push_back(0);
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        mp[a]++;
        mp[a+b]--;
        date.push_back(a);
        date.push_back(a+b);
    }
    sort(all(date));
    date.erase(unique(all(date)),date.end());
    rep(i,(ll)date.size()-1){
        mp[date[i+1]]+=mp[date[i]];
    }
    vector<ll> ans(n+9);
    rep(i,(ll)date.size()-1){
        ans[mp[date[i]]]+=(date[i+1]-date[i]);
    }
    rep1(i,1,n+1)cout<< ans[i] << " ";
    cout<<endl;
    //for(auto [s,t]:mp)cout<< s<<" "<<t << endl;
}