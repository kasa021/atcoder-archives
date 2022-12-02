/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc034/submissions/36922931
 * Submitted at: 2022-12-02 04:17:39
 * Problem URL: https://atcoder.jp/contests/abc034/tasks/abc034_c
 * Result: AC
 * Execution Time: 28 ms
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
using mint = modint1000000007;
//cout<<x.val()<<endl;
int main(){
      int n,m;
      cin>>n>>m;
      n--,m--;
      mint ans=1;
      //mint::set_mod(ans);
      for (int i = 1; i <= m + n; ++i) ans *= i;
      rep1(i,1,n+1) ans /= i;
      rep1(i,1,m+1) ans /= i;
      cout<< ans.val() << endl;
    }
