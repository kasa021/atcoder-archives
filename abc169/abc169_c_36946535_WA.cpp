/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/36946535
 * Submitted at: 2022-12-03 11:21:55
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_c
 * Result: WA
 * Execution Time: 16 ms
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

int main(){
    long double a,b;
    cin>>a>>b;
    cout<< setprecision(30) << floor(a*b) << endl;
    }
