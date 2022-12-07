/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc046/submissions/37077230
 * Submitted at: 2022-12-07 11:23:08
 * Problem URL: https://atcoder.jp/contests/abc046/tasks/abc046_b
 * Result: AC
 * Execution Time: 7 ms
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
    ll n,k,ans=0;
    cin>>n>>k;
    ans=k;
    rep(i,n-1) ans*=(k-1);
    cout<< ans << endl;
    }
