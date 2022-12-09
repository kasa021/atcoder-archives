/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/37120006
 * Submitted at: 2022-12-09 21:34:55
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_d
 * Result: AC
 * Execution Time: 35 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;


int main(){
    ll n,k,ans=0,sum=0;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    ll r = 0;
    for (ll l = 0; l < n; ++l) {
        while (r < n && sum<k) {
        sum+=a[r];
        ++r;
    }
    if(sum<k) break;
    ans+=n-r+1;
    sum-=a[l];

    
        /* break した状態で right は条件を満たす最大なので、何かする */
        // ex: res += (right - left);
    
        /* left をインクリメントする準備 */
        // ex: if (right == left) ++right;
        // ex: else sum -= a[left];
    }
    cout<< ans << endl;
    }
