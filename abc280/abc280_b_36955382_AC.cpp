/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36955382
 * Submitted at: 2022-12-03 12:05:20
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_b
 * Result: AC
 * Execution Time: 6 ms
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
     int n;
     cin>>n;
     vector<ll> a(n);
     rep(i,n) cin>>a[i];
     vector<ll> ans(n);
     ans[0]=a[0];
     ll now=a[0];
     rep1(i,1,n){
        ans[i]=a[i]-now;
        now+=ans[i];
     }
     rep(i,n) cout<< ans[i] << endl;
    }
