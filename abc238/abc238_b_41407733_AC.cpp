/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/41407733
 * Submitted at: 2023-05-14 05:12:35
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_b
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
      int n;
      cin>>n;
      vector<int> a(n),angle(n+2);
      rep(i,n)cin>>a[i];
      angle[0]=0;
      angle[n+1]=360;
      rep(i,n){
        angle[i+1]=(angle[i]+a[i])%360;
      }
      sort(all(angle));
    //   for(auto v:angle) cout<< v << endl;
      int ans=0;
      rep(i,n+1){
        ans=max(ans,angle[i+1]-angle[i]);
      }
      cout<< ans << endl;
    }
