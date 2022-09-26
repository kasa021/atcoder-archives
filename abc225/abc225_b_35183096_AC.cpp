/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/35183096
 * Submitted at: 2022-09-26 14:04:53
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_b
 * Result: AC
 * Execution Time: 66 ms
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
      graph g(n+1);
      rep(i,n){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      bool f=false;
      rep1(i,1,n+1){
        if((int)g[i].size()==n) f=true;
        //cout<< g[i].size() << endl;
      }
      cout << (f ? "Yes" : "No") << endl;
    }