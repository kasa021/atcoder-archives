/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36966298
 * Submitted at: 2022-12-03 12:15:26
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: WA
 * Execution Time: 18 ms
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
bool isprime(ll x){
    ll i;
    for(ll i=2;i*i<=x;i++){
       if(x%i==0) return false;
    }
    return true;
}
int main(){
       ll k,now=1;
       cin>>k;
       if(isprime(k)){
        cout<< k << endl;
        return 0;
       }
       rep1(i,1,100000){
        now*=i;
        if(now%k==0){
            cout<< i << endl;
            return 0;
        }
       }
    }
