/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/38839968
 * Submitted at: 2023-02-12 09:07:10
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_e
 * Result: AC
 * Execution Time: 410 ms
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
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n+1);
    rep(i,m){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    dsu d(n+1);
    vector<ll> res={0};
    ll ans=0;
    for(int i=n;i>=2;i--){
        ans++;
        for(auto j:v[i]){
            if(!d.same(i,j)){
                d.merge(i,j);
                ans--;
            }
        }
        res.push_back(ans);
    }
    reverse(all(res));
    for(auto v:res) cout<< v << endl;
}