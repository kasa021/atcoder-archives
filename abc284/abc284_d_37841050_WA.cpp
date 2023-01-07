/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37841050
 * Submitted at: 2023-01-07 13:22:09
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_d
 * Result: WA
 * Execution Time: 143 ms
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

std::vector<ll> f(ll N )
{
    std::vector<bool> is_prime( N + 1 );
    for( ll i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<ll> P;
    for( ll i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( ll j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}


int main()
{
    ll t;
    cin>>t;
    vector<ll> p=f(10000000);
    
    rep(i,t){
        ll n;
        cin>>n;
        bool f=false;
        for(auto i:p){
            if(n%(i*i)==0){
                cout<< i<<" "<< n/(i*i)<< endl;
                f=true;
            }
        }
        if(!f){
            rep1(i,2,1000000){
                if(n%i==0){
                    cout<< sqrt(n/i)<<" "<<i << endl;
                    break;
                }
            }
        }
    }
}
