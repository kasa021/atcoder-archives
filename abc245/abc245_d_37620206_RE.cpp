/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/37620206
 * Submitted at: 2022-12-29 14:23:56
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_d
 * Result: RE
 * Execution Time: 106 ms
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
// typedef modint1000000007 mint;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+9),b(n+9),c(n+m+9);
    rep(i,n+1) cin>>a[i];
    rep(i,n+m+1) cin>>c[i];
    for(int i=m;i>=0;i--){
        b[i]=c[i+n]/a[n];
        for(int j=n-1;j>=0;j--){
            c[i+j]-=b[i]*a[j];
        }
    }
    rep(i,m+1){
        cout<< b[i] << " ";
    }cout<<endl;
}
