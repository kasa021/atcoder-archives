/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc051/submissions/38318526
 * Submitted at: 2023-01-25 10:45:21
 * Problem URL: https://atcoder.jp/contests/abc051/tasks/abc051_c
 * Result: AC
 * Execution Time: 5 ms
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
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    string ans;
    rep(i,tx-sx) ans+="R";
    rep(i,ty-sy) ans+="U";
    rep(i,tx-sx) ans+="L";
    rep(i,ty-sy+1) ans+="D";
    rep(i,tx-sx+1) ans+="R";
    rep(i,ty-sy+1) ans+="U";
    ans+="LU";
    rep(i,tx-sx+1) ans+="L";
    rep(i,ty-sy+1) ans+="D";
    ans+="R";
    cout<< ans << endl;
    }
