/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/36933319
 * Submitted at: 2022-12-02 16:20:37
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_d
 * Result: WA
 * Execution Time: 76 ms
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
//typedef modint1000000007 mint;
int main(){
      int n;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      set<int> st;
      rep(i,n/2) {
        if(a[i]!=a[n-1-i]) st.insert(a[i]),st.insert(a[i-1-i]);
      }
      cout<< (int)st.size()/2 << endl;
    }
