/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003204
 * Submitted at: 2022-09-19 18:24:10
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai
 * Result: AC
 * Execution Time: 215 ms
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
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      vector<int> cs(n + 1);
      cs[0] = 0;
      for (int i = 0; i < n; i++)
          cs[i + 1] = cs[i] + a[i];
      
      rep(i,q){
        int l,r;
        cin>>l>>r;
        cout<< cs[r]-cs[l-1] << endl;
      }
    }