/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/35778464
 * Submitted at: 2022-10-18 22:03:17
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_c
 * Result: AC
 * Execution Time: 48 ms
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
      int n;
      cin>>n;
      vector<int> a(n+9),g1(n+9,0),g2(n+9,0);
      rep(i,n)cin>>a[i];
      g1[1]=a[0];
      g2[1]=a[n-1];
      rep1(i,2,n+1){
        g1[i]=__gcd(g1[i-1],a[i-1]);
      }
      rep1(i,2,n+1){
        g2[i]=__gcd(g2[i-1],a[n-i]);
      }
      int ans=0;
      rep(i,n){
        ans=max(ans,__gcd(g1[i],g2[n-i-1]));
      }
      cout<< ans << endl;
    }