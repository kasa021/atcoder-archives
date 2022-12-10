/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/37124616
 * Submitted at: 2022-12-10 04:52:48
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_c
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
    vector<int> c(n),s(n),f(n);
    rep(i,n) cin>>c[i]>>s[i]>>f[i];
    rep(i,n){
        int t=0;
        rep1(j,i,n-1){
            if(t<s[j]) t=s[j];
            else if(t%f[j]==0);
            else t=t+f[j]-t%f[j];
            t+=c[j];
        } 
        cout<< t << endl;
    }
    }
