/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/38149705
 * Submitted at: 2023-01-19 06:57:56
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_d
 * Result: AC
 * Execution Time: 32 ms
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
    ll n,ans=0;
    string s;
    cin>>n>>s;
    ll r=0,g=0,b=0;
    rep(i,n){
        if(s[i]=='R') r++;
        else if(s[i]=='G') g++;
        else b++;
    }
    ans=r*b*g;
    ll cnt=0;
    rep(i,n){
        rep1(j,i+1,n){
            ll k=2*j-i;
            if( j<k && k<n &&s[i]!=s[j] && s[j]!=s[2*j-i] && s[2*j-i]!=s[i]){
                ans--;
            }
        }
    }
    cout<< ans << endl;
}
