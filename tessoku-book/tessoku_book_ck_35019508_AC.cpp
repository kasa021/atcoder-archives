/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35019508
 * Submitted at: 2022-09-20 16:11:45
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ck
 * Result: AC
 * Execution Time: 18 ms
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
      double n;
      cin>>n;
      double l=0,r=100;
      while(r-l>0.0000000001){
        double m=(l+r)/2;
        if(m*m*m+m>n) r=m;
        if(m*m*m+m<n) l=m;
       // cout<<l<<" "<<r<<endl;
      }
      printf("%.10f",l);
    }