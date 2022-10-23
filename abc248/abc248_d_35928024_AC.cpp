/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/35928024
 * Submitted at: 2022-10-23 17:15:36
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_d
 * Result: AC
 * Execution Time: 500 ms
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
      int n;
      cin>>n;
      vector<vector<int>> idx(n+1);
      rep(i,n){
        int a;
        cin>>a;
        idx[a].push_back(i);
      }

      int q;
      cin>>q;
      while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        auto v1=lower_bound(all(idx[x]),r);
        auto v2=lower_bound(all(idx[x]),l-1);
        cout<< v1-v2 << endl;
      }
      
    }