/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/37238950
 * Submitted at: 2022-12-12 15:16:12
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_d
 * Result: AC
 * Execution Time: 79 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
      ll n,sum=0;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      sort(all(a),greater<ll>());
      vector<ll> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
     
      //cout<< csa[n] << endl;
      rep(i,n-1){
        sum+=((n-i-1)*a[i]-(csa[n]-csa[i+1]));
        //cout<< csa[n]-csa[i+1] << endl;
      }
      cout<< sum << endl;
      
    }
