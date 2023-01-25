/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/38316546
 * Submitted at: 2023-01-25 08:35:58
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_d
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
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;

ll f(ll n){
    return n*n*n*n*n;
}


int main(){
    ll x;
    cin>>x;

    vector<P> a;
    for(ll i=-200;i<=200;i++){
        a.push_back({f(i),i});
    }
    int size=a.size();
    rep(i,size){
        rep(j,size){
            if(x==(a[i].first-a[j].first)){
                cout<< a[i].second<<" "<<a[j].second << endl;
                return 0;
            }
        }
    }
    }
