/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/37635520
 * Submitted at: 2022-12-30 12:00:04
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/arc101_a
 * Result: AC
 * Execution Time: 40 ms
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
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> x(n);
    rep(i,n) cin>>x[i];
    ll l,r,ans=INT_MAX;
    l=0;r=k-1;
    for(r=k-1;r<n;r++){
        ans=min(ans,abs(x[l])+abs(x[r]-x[l]));
        ans=min(ans,abs(x[r])+abs(x[r]-x[l]));
        l++;
    }
    cout<< ans << endl;
}

