/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/37010419
 * Submitted at: 2022-12-04 04:46:47
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_d
 * Result: TLE
 * Execution Time: 2205 ms
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
      ll a,b,n,ans=0;
      cin>>a>>b>>n;
      for(ll i=0;i<=n;i+=(b-1ll)){
        ll now=0;
        now=(a*i)/b-a*(i/b);
        //cout<< (a*i)/b<<"-"<<a*(i/b)<<"="<<ans << endl;
        ans=max(ans,now);
      }
      ans=max(ans,(a*n)/b-a*(n/b));
      cout<< ans << endl;
    }
