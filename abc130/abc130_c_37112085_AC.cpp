/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/37112085
 * Submitted at: 2022-12-09 11:03:34
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_c
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
    double w,h,x,y;
    cin>>w>>h>>x>>y;
    cout<<fixed<< setprecision(10) << (w*h)/2 << endl;
    if(x==w/2 && y==h/2) cout<< 1 << endl;
    else cout<< 0 << endl;
    }
