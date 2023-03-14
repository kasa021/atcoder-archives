/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/39718519
 * Submitted at: 2023-03-14 05:29:46
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_e
 * Result: AC
 * Execution Time: 147 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<T> x(m);
    rep(i,m){
        ll a,b,c;
        cin>>a>>b>>c;
        x[i]=T(c,a,b);
    }
    dsu uf(n+9);
    sort(all(x));
    ll ans=0;
    rep(i,m){
        auto [c,a,b] = x[i];
       // cout<< i<<" "<<c << endl;
        if(c<0){
            uf.merge(a,b);
        }else {
            if(!uf.same(a,b)){
                uf.merge(a,b);
            }else {
                ans+=c;
            }
        }
    }
    cout<< ans << endl;
}
