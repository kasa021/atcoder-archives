/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36999224
 * Submitted at: 2022-12-03 14:10:03
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_e
 * Result: AC
 * Execution Time: 55 ms
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
typedef modint998244353 mint;
int main(){
       ll n,p;
       cin>>n>>p;
       vector<mint> dp(n+1);
       dp[0]=0;
       dp[1]=1;
       rep1(i,2,n+1){
        dp[i]=(dp[i-2]+1)*p/100+(dp[i-1]+1)*(100-p)/100;
       }
       cout<< dp[n].val() << endl;
    }
