/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/41304790
 * Submitted at: 2023-05-11 09:51:01
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_b
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
      int n,m;
      cin>>n>>m;
      vector<int> ans(n);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        ans[a-1]++;
        ans[b-1]++;
      }
      rep(i,n) cout<< ans[i] << endl;
    }
    