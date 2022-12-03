/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36999431
 * Submitted at: 2022-12-03 14:13:36
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: AC
 * Execution Time: 23 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif


using namespace std;
using ll = long long ;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;


int main(){
    ll k,p,a,n,x,ans=1;
    cin>>k;
    for(p=2;(p*p)<=k;p++){
        a=0;
        while(k%p==0) k/=p,a++;
        n=0;
        while(a>0){
            n+=p;
            x=n;
            while(x%p==0) x/=p,a--;
        }
        ans=max(ans,n);
    }
    ans=max(ans,k);
    cout<< ans << endl;
    }
