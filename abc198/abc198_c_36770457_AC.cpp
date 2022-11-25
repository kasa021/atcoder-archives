/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/36770457
 * Submitted at: 2022-11-25 08:36:40
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_c
 * Result: AC
 * Execution Time: 5 ms
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
      double r,x,y;
      cin>>r>>x>>y;
      double d=sqrt(x*x+y*y);
      cout<< (d/r<1 ? 2:(int)ceil(d/r)) << endl;
    }