/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/34634897
 * Submitted at: 2022-09-05 09:49:28
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_c
 * Result: AC
 * Execution Time: 449 ms
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
      int n,q;
      cin>>n>>q;
      vector<int> a(n),x(q);
      rep(i,n) cin>>a[i];
      rep(i,q) cin>>x[i];
      sort(a.begin(),a.end());
      rep(i,q){
        auto s=a.end()-lower_bound(a.begin(),a.end(),x[i]);
        cout<<s<<endl;
      }
    }