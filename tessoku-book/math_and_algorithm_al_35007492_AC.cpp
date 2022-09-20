/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35007492
 * Submitted at: 2022-09-20 04:33:11
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_al
 * Result: AC
 * Execution Time: 931 ms
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
      int t,n;
      cin>>t>>n;
      vector<int> l(500009),r(500009);
      rep1(i,1,n+1)cin>>l[i]>>r[i];
      vector<int> b(500009);
      rep1(i,1,n+1){
        b[l[i]]++;
        b[r[i]]--;
      }
      vector<int> ans(500009);
      ans[0]=0;
      rep1(i,0,t+1) ans[i+1]=ans[i]+b[i];
      rep1(i,1,t+1) cout<< ans[i] << endl;
    }