/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35467716
 * Submitted at: 2022-10-08 12:01:00
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_a
 * Result: AC
 * Execution Time: 7 ms
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
      int n;
      cin>>n;
      int a[n];
      rep(i,n)cin>>a[i];
      int sum=0;
      rep(i,n) sum+=a[i];
      cout<< sum << endl;
    }