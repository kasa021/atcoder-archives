/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/37633644
 * Submitted at: 2022-12-30 10:02:41
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_d
 * Result: WA
 * Execution Time: 43 ms
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
    ll n,sum=0;
    cin>>n;
    vector<ll> a(n+9);
    rep(i,n) cin>>a[i];
    rep(i,n-2){
        if(a[i]<0){
            a[i]*=(-1);
            a[i+1]*=(-1);
        }
        sum+=a[i];
    }
    ll ans1=0,ans2=0;
    ans1=sum+(a[n-2]+a[n-1])*(-1);
    ans2=sum+(a[n-2]+a[n-1]);
    cout<< max(ans1,ans2) << endl;
}
