/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35067087
 * Submitted at: 2022-09-23 12:33:50
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ae
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
      ll n;
      cin>>n;
      int a=3,b=5,c=15;
      ll ans1=n/a;
      ll ans2=n/5;
      ll ans3=n/c;
      cout<< ans1+ans2-ans3 << endl;
    }