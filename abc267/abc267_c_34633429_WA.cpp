/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34633429
 * Submitted at: 2022-09-05 08:28:06
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_c
 * Result: WA
 * Execution Time: 59 ms
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
      int n,m;
      cin>>n>>m;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll ans=-1000000000000000ll;
      vector<ll> sum(n+1);
      sum[0]=0;
      rep1(i,1,n+1) sum[i]=sum[i-1]+a[i-1];
      vector<ll> sumi(n-m+1);
      ll now=0;
      rep(i,m) now+=a[i]*(i+1);
      sumi[0]=now;
      rep1(i,1,n-m+1) sumi[i]=sumi[i-1]-(sum[m+i-1]-sum[i-1])+m*a[m+i-1];
      rep(i,n-m+1) ans=max(ans,sumi[i]);
      cout<<ans<<endl;
    }