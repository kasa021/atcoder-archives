/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc034/submissions/36922540
 * Submitted at: 2022-12-02 03:43:36
 * Problem URL: https://atcoder.jp/contests/abc034/tasks/abc034_c
 * Result: RE
 * Execution Time: 117 ms
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
typedef modint1000000007 mint;
//cout<<x.val()<<endl;
int main(){
      int n,m;
      cin>>n>>m;
      n--,m--;
      mint ans=1;
      rep(i,n+m) ans*=i;
      rep(i,n) ans/=i;
      rep(i,m) ans/=i;
      cout<< ans.val() << endl;
    }
