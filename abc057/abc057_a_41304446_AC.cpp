/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/41304446
 * Submitted at: 2023-05-11 09:33:36
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_a
 * Result: AC
 * Execution Time: 10 ms
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
      int a,b;
      cin>>a>>b;
      cout<< (a+b)%24 << endl;
    }
    