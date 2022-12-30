/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/37631406
 * Submitted at: 2022-12-30 08:08:48
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_d
 * Result: AC
 * Execution Time: 18 ms
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
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
// typedef modll1000000007 mll;

map<ll,int> e(ll n){
    map<ll,int> v;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            v[i]++;
            n/=i;
        }
    }
    if(n>1) v[n]++;
    return v;
}

ll a,b;
int main(){
    cin>>a>>b;
    auto com=e(__gcd(a,b));
    cout<< com.size()+1 << endl;
}
