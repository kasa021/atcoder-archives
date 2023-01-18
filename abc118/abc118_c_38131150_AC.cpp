/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc118/submissions/38131150
 * Submitted at: 2023-01-18 06:07:16
 * Problem URL: https://atcoder.jp/contests/abc118/tasks/abc118_c
 * Result: AC
 * Execution Time: 39 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int g=a[0];
    rep(i,n) g=__gcd(g,a[i]);
    cout<< g << endl;
    }
