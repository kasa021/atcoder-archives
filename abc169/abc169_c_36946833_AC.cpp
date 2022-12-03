/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/36946833
 * Submitted at: 2022-12-03 11:36:11
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_c
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

int main(){
    ll a;
    double b;
    cin>>a>>b;
    ll ib=b*100+0.5;
    a*=ib;
    a/=100;
    printf("%lld\n",a);
    }
