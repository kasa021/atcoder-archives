/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/38863769
 * Submitted at: 2023-02-13 10:26:38
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_e
 * Result: RE
 * Execution Time: 205 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    vector<ll> p(a),q(b),r(c);
    rep(i,a)cin>>p[i];
    rep(i,b) cin>>q[i];
    rep(i,c) cin>>r[i];
    sort(all(p),greater<ll>());
    sort(all(q),greater<ll>());
    sort(all(r),greater<ll>());
    ll ans=0;
    vector<ll> v;
    rep(i,x){
        ans+=p[i];
        v.push_back(p[i]);
    }
    rep(i,y){
        ans+=q[i];
        v.push_back(q[i]);
    }
    sort(all(v));
    rep(i,c){
        if(v[i]<r[i]){
            ans-=v[i];
            ans+=r[i];
        }
    }
    cout<< ans << endl;
}