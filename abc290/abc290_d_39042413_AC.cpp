/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc290/submissions/39042413
 * Submitted at: 2023-02-19 13:25:46
 * Problem URL: https://atcoder.jp/contests/abc290/tasks/abc290_d
 * Result: AC
 * Execution Time: 287 ms
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
    int t;
    cin>>t;
    rep(i,t){
        ll n,d,k;
        cin>>n>>d>>k;
        k--;
        ll ans=(d*k)%n+k/(n/__gcd(d,n));
        cout<< ans << endl;
    }

    // ll n,d;
    // cin>>n>>d;
    // rep(i,n){
    //     ll ans=(d*i)%n+i/(n/__gcd(d,n));
    //     cout<< ans << endl;
    // }
}