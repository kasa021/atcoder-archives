/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/39730489
 * Submitted at: 2023-03-14 13:54:08
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_c
 * Result: AC
 * Execution Time: 185 ms
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

int primef(ll n){
    ll x=n;
    int res=0;
    for(ll i=2;i*i<=n;i++){
        ll cnt=0;
        if(x%i) continue;
        while(x%i==0){
            cnt++;
            x/=i;
        }
        res+=cnt;
    }
    if(x!=1) res++;
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);


    rep1(i,1,n+1){
        cout<< primef(i)+1 << " ";
    }
    cout<<endl;
    }
