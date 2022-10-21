/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc077/submissions/35822278
 * Submitted at: 2022-10-21 02:54:09
 * Problem URL: https://atcoder.jp/contests/abc077/tasks/arc084_a
 * Result: AC
 * Execution Time: 119 ms
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
      ll ans=0;
      cin>>n;
      vector<int> a(n),b(n),c(n);
      rep(i,n) cin>>a[i];
      rep(i,n) cin>>b[i];
      rep(i,n) cin>>c[i];
      sort(all(a));
      sort(all(c));
      rep(i,n){
        ll s=lower_bound(all(a),b[i])-a.begin();
        ll t=c.end()-lower_bound(all(c),b[i]+1);
        ans+=t*s;
        
      }
      cout<< ans << endl;

    }