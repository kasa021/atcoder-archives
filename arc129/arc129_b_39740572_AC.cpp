/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc129/submissions/39740572
 * Submitted at: 2023-03-15 04:46:40
 * Problem URL: https://atcoder.jp/contests/arc129/tasks/arc129_b
 * Result: AC
 * Execution Time: 415 ms
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
    ll a=0,b=INT_MAX;
    rep(i,n){
        ll l,r;
        cin>>l>>r;
        a=max(a,l);
        b=min(b,r);
        if(a<=b)cout<< 0 << endl;
        else cout<< (a-b-1)/2+1 << endl;
    }
    }
