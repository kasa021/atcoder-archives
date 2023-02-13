/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/38863497
 * Submitted at: 2023-02-13 10:10:07
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_d
 * Result: AC
 * Execution Time: 10 ms
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
    int n;
    cin>>n;
    vector<vector<ll>> cnt(10,vector<ll> (10,0));
    ll now=1;
    rep1(i,1,n+1){
        if(i==10) now*=10;
        if(i==100) now*=10;
        if(i==1000) now*=10;
        if(i==10000) now*=10;
        if(i==100000) now*=10;
        cnt[i/now][i%10]++;
    }
    ll ans=0;
    rep(i,10){
        rep(j,10){
            ans+=cnt[i][j]*cnt[j][i];
        }
    }
    cout<< ans << endl;
}