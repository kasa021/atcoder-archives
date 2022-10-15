/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35696648
 * Submitted at: 2022-10-15 14:04:26
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_b
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
      ll x,k;
      cin>>x>>k;
      ll now=x,c=1;
      rep(i,k){
        if((now/c)%10>=5){
          now=(now/(c*10)+1)*(c*10);
        }else {
          now=(now/(c*10))*(c*10);
        }
        c*=10;
      }
      cout<< now << endl;
      return 0;
    }