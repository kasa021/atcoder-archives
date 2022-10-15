/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/35659388
 * Submitted at: 2022-10-15 10:54:10
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_a
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
      string s;
      cin>>s;
      int size=s.size();
      if(s[size-1]=='t')cout<< "ist" << endl;
      else cout<< "er" << endl;
    }