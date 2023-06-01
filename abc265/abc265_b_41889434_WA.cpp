/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/41889434
 * Submitted at: 2023-06-01 09:48:06
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_b
 * Result: WA
 * Execution Time: 114 ms
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
    ll n,m,t;
    cin>>n>>m>>t;
    vector<ll> a(n),x(m),y(m);
    map<ll,ll> mp;
    rep(i,n-1) cin>>a[i];
    rep(i,m) {
        cin>>x[i]>>y[i];
        mp[x[i]-1]=y[i];
    }
    rep(i,n-1){
        if(t>0){
            t-=a[i];
            t+=mp[i];
        }else {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
