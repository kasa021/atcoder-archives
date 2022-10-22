/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35862414
 * Submitted at: 2022-10-22 12:02:00
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_a
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
      double a,b,ans=0;
      cin>>a>>b;
      if(a==b) cout<< "1.000" << endl;
      else {
        ans=b/a;
        printf("%.3f\n",ans);
      }
    }
