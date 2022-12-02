/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc021/submissions/36925634
 * Submitted at: 2022-12-02 07:46:58
 * Problem URL: https://atcoder.jp/contests/abc021/tasks/abc021_d
 * Result: AC
 * Execution Time: 30 ms
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
int main(){
      int n,k;
      cin>>n>>k;
      mint ans=1;
      rep1(i,1,n+k) ans*=i;
      rep1(i,1,n) ans/=i;
      rep1(i,1,k+1) ans/=i;
      cout<< ans.val() << endl;
    }