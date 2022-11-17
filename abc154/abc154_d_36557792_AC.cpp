/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc154/submissions/36557792
 * Submitted at: 2022-11-17 13:30:37
 * Problem URL: https://atcoder.jp/contests/abc154/tasks/abc154_d
 * Result: AC
 * Execution Time: 63 ms
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


double sum(double i){
    return (i*(i+1))/2;
}

int main(){
      int n,k;
      double ans=0,now=0;
      cin>>n>>k;
      vector<double> a(n);
      rep(i,n) cin>>a[i];
      rep(i,k){
        now+=sum(a[i])/a[i];
      }
      ans=now;
      rep1(i,k,n){
        now+=sum(a[i])/a[i]-sum(a[i-k])/a[i-k];
        ans=max(ans,now);
      }
      cout<<fixed<< setprecision(10) << ans << endl;

    }