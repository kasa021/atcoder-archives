/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/35979379
 * Submitted at: 2022-10-26 10:47:39
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_d
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

int main(){
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      vector<ll> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
          ll ans=0;
      rep(l,n){
        rep1(r,l,n){
            if(csa[r+1]-csa[l]==k) ans++;
        }
      }
      cout<< ans << endl;
    }