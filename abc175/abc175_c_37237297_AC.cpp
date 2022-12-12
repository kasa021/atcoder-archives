/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc175/submissions/37237297
 * Submitted at: 2022-12-12 13:45:37
 * Problem URL: https://atcoder.jp/contests/abc175/tasks/abc175_c
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
      ll x,d,k;
      cin>>x>>k>>d;
      x=abs(x);

      ll s=min(k,x/d);
      k-=s;
      x-=s*d;

      if(k%2==0){
        cout<< x << endl;
      }else {
        cout<< d-x << endl;
        
      }
    }
