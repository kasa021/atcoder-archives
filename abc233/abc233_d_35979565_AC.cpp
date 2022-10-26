/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/35979565
 * Submitted at: 2022-10-26 10:58:34
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_d
 * Result: AC
 * Execution Time: 195 ms
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

      map<ll,ll> mp;  
      ll ans=0;
      rep1(r,1,n+1){
        mp[csa[r-1]]++;
        ans+=mp[csa[r]-k];
      }

      
      cout<< ans << endl;
    }