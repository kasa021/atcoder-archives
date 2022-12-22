/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc197/submissions/37445786
 * Submitted at: 2022-12-22 13:34:06
 * Problem URL: https://atcoder.jp/contests/abc197/tasks/abc197_d
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
//typedef modint1000000007 mint;
int main(){
      int n,a,b,c,d;
      cin>>n>>a>>b>>c>>d;
      double x,y;
      x=((a-c)*cos(2*M_PI/n)-(b-d)*sin(2*M_PI/n)+a+c)/2;
      y=((a-c)*sin(2*M_PI/n)+(b-d)*cos(2*M_PI/n)+b+d)/2;
      cout<<fixed<< setprecision(20)  <<x<<" "<<y << endl;
    }
