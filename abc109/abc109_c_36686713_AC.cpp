/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc109/submissions/36686713
 * Submitted at: 2022-11-20 17:06:58
 * Problem URL: https://atcoder.jp/contests/abc109/tasks/abc109_c
 * Result: AC
 * Execution Time: 44 ms
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
      ll n,x;
      cin>>n>>x;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      rep(i,n) a[i]=abs(a[i]-x);
      sort(all(a));
    //   rep(i,n) cout<<a[i]<<" ";
    //   cout<<endl; 
    ll ans=a[0];
      rep1(i,1,n) ans=__gcd(ans,a[i]);
      cout<< ans << endl;
    }