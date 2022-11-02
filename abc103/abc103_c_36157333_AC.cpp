/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc103/submissions/36157333
 * Submitted at: 2022-11-02 11:26:24
 * Problem URL: https://atcoder.jp/contests/abc103/tasks/abc103_c
 * Result: AC
 * Execution Time: 6 ms
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
      ll n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll ans=0;
      rep(i,n) ans+=(a[i]-1);
      cout<< ans << endl;
    }
