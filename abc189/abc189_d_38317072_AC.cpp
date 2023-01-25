/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/38317072
 * Submitted at: 2023-01-25 09:02:53
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_d
 * Result: AC
 * Execution Time: 8 ms
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
    ll n;
    cin>>n;
    ll ok=1,ng=1;
    rep(i,n){
        string s;
        cin>>s;
        if(s=="AND") ng=2*ng+ok;
        else ok=2*ok+ng;
    }
    cout<< ok << endl;
    }
