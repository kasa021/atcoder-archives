/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abs/submissions/37971450
 * Submitted at: 2023-01-13 02:48:41
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc085_b
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
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
      int n;
      cin>>n;
      vector<int> d(n);
      rep(i,n) cin>>d[i];
      sort(all(d));
      d.erase(unique(d.begin(), d.end()),d.end());
      cout<< (int)d.size() << endl;
      
    }
