/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc144/submissions/38170675
 * Submitted at: 2023-01-20 11:11:27
 * Problem URL: https://atcoder.jp/contests/abc144/tasks/abc144_d
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
//typedef modint1000000007 mint;
int main(){
    double a,b,x;
    cin>>a>>b>>x;
    double half=a*a*b/2,ans;

    if(x<half) ans=atan(a*b*b/(2.0*x));
    else ans=atan((2.0*b-2.0*x/(a*a))/a);
    ans=ans/M_PI*180;
    cout<< fixed<< setprecision(20) << ans << endl;
    //cout<< M_PI << endl;
    }
