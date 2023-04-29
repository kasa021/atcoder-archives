/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41022338
 * Submitted at: 2023-04-29 12:01:26
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_a
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
      int n,a,b;
      cin>>n>>a>>b;
      vector<int> c(n);
      rep(i,n) cin>>c[i];
      rep(i,n){
        if(a+b==c[i]){
            cout<< i+1 << endl;
            return 0;
        }
      }
    }