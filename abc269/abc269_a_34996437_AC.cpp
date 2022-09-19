/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34996437
 * Submitted at: 2022-09-19 11:36:02
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_a
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

int main(){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      cout<< (a+b)*(c-d) << endl;
      cout<< "Takahashi" << endl;
    }