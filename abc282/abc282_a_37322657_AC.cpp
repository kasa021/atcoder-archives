/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37322657
 * Submitted at: 2022-12-17 12:01:20
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_a
 * Result: AC
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
//typedef modint1000000007 mint;
int main(){
      int k;
      cin>>k;
      string s;
      rep(i,k) s+='A'+i;
      cout<< s << endl;
    }
