/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc060/submissions/36555701
 * Submitted at: 2022-11-17 12:01:57
 * Problem URL: https://atcoder.jp/contests/abc060/tasks/arc073_a
 * Result: AC
 * Execution Time: 64 ms
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
      int  n;
      ll t,ans=0;
      cin>>n>>t;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      rep(i,n-1){
        ans+=min(t,a[i+1]-a[i]);
      }
      ans+=t;
      cout<< ans << endl;
    }