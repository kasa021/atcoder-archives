/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/37620057
 * Submitted at: 2022-12-29 14:16:33
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_d
 * Result: RE
 * Execution Time: 116 ms
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
    b[0]=c[0]/a[0];
    rep1(i,1,m+1){
        int now=0,idx=-1;
        for(int j=n;j>0;j--){
            if(i-j<0 ||i-j>m)continue;
            now+=a[j]*b[i-j];
        }
        b[i]=(c[i]-now)/a[0];
    }
    rep(i,m+1){
        cout<< b[i] << " ";
    }cout<<endl;
}
