/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/36933635
 * Submitted at: 2022-12-02 16:53:07
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_d
 * Result: AC
 * Execution Time: 56 ms
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
      int n;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      const int m=200005;
      dsu d(m);
      rep(i,n) d.merge(a[i],a[n-1-i]);
      int ans=0;
      rep(i,m){
        if(d.leader(i)!=i) continue;
        ans+=d.size(i)-1;
      }
      cout<< ans << endl;
      
    }
