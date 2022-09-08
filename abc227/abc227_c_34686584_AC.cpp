/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/34686584
 * Submitted at: 2022-09-08 06:38:05
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_c
 * Result: AC
 * Execution Time: 262 ms
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
      ll n,ans=0;
      cin>>n;
      for(ll a=1;a*a*a<=n;a++){
        for(ll b=a;a*b*b<=n;b++){
          ans+=n/a/b-b+1;
        }
      }
      cout<<ans<<endl;
    }