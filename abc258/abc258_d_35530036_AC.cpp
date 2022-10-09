/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/35530036
 * Submitted at: 2022-10-09 08:30:15
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_d
 * Result: AC
 * Execution Time: 121 ms
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
      vector<ll> a(200009),b(200009);
      cin>>n>>x;
      rep(i,n)cin>>a[i]>>b[i];
      vector<ll> csc(n + 1);
      csc[0] = 0;
      for (int i = 0; i < n; i++)
          csc[i + 1] = csc[i] + a[i]+b[i];

      ll ans=numeric_limits<ll>::max();
      rep(i,n){
        if(i+1>x) break;
        ans=min(ans,csc[i+1]+b[i]*(x-i-1));
      }
      cout<< ans << endl;
      
      
    }