/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/36770347
 * Submitted at: 2022-11-25 08:30:55
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_c
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
      double r,x,y;
      int ans=0;
      cin>>r>>x>>y;
      ans=floor((sqrt(x*x+y*y)/r)+0.999);
      cout<< ans << endl;
    }