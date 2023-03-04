/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/39418497
 * Submitted at: 2023-03-04 12:16:40
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_c
 * Result: AC
 * Execution Time: 498 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

ll enum_div(ll n){
    ll res;
    res=2;
    for(ll i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res++;
            if(i*i != n){
                res++;
           }
       }
   }
return res;
}


int main()
{
    ll n;
    cin>>n;
    vector<ll> num(n+9);
    num[1]=1;
    rep1(i,2,n){
        num[i]=enum_div(i);
    }
    ll ans=0;
    rep1(i,1,n){
        ans+=num[i]*num[n-i];
    }
    cout<< ans << endl;
}