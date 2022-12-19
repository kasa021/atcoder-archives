/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/37397014
 * Submitted at: 2022-12-19 14:16:12
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_d
 * Result: AC
 * Execution Time: 252 ms
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
    ll t;
    cin>>t;
    rep(i,t){
        ll a,s,x;
        cin>>a>>s;
        x=s-2*a;
        //cout<< x << endl;
        if(x>=0){
            if((x & a) == 0)cout<< "Yes" << endl;
            else cout<< "No" << endl;
        }else cout<< "No" << endl;
    }
    }
