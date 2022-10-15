/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35675155
 * Submitted at: 2022-10-15 12:27:05
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_b
 * Result: AC
 * Execution Time: 14 ms
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
      long double x,k;
      cin>>x>>k;
      long double c=10;
      rep(i,k){
        x=x/c;
        x=round(x);
        x=x*c;
        c=c*10;
      }
      
      cout<< (ll)x << endl;
    }