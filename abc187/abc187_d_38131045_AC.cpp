/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/38131045
 * Submitted at: 2023-01-18 05:58:14
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_d
 * Result: AC
 * Execution Time: 124 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
    ll n,sum=0;;
    cin>>n;
    vector<ll> a(n),b(n),ab(n);
    rep(i,n){
        cin>>a[i]>>b[i];
        ab[i]=2*a[i]+b[i];
        sum-=a[i];
    }
    sort(all(ab),greater<ll>());
    int idx=0;
    while(sum<=0){
        sum+=ab[idx];
        idx++;
    }
    cout<< idx << endl;

    }
