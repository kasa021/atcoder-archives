/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/38864509
 * Submitted at: 2023-02-13 11:09:46
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_e
 * Result: AC
 * Execution Time: 138 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    ll n;
    cin>>n;
    vector<ll> z(n),w(n);
    rep(i,n){
        int x,y;
        cin>>x>>y;
        z[i]=x+y;
        w[i]=x-y;
    }
    ll ans=0;
    sort(all(z));
    sort(all(w));
    ans=max(ans,z[n-1]-z[0]);
    ans=max(ans,w[n-1]-w[0]);
    cout<<ans<<endl;
}