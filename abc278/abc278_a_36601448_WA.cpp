/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36601448
 * Submitted at: 2022-11-19 12:03:35
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_a
 * Result: WA
 * Execution Time: 8 ms
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
      int n,k;
      cin>>n>>k;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      if(n<k){
        rep(i,n)cout<< "0" << endl;
        return 0;
      }
      rep1(i,k,n){
        cout<< a[i] << endl;
      }
      rep(i,n-k+1){
        cout<< "0" << endl;
      }
    }
