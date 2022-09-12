/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/34820336
 * Submitted at: 2022-09-12 12:12:33
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_d
 * Result: WA
 * Execution Time: 252 ms
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
      vector<set<int>> st(n);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        st[a].insert(b);
        st[b].insert(a);
      }
      int ans=0;
      rep(i,n){
        ans=max(ans,(int)st[i].size());
        //cout<< (int)st[i].size() << endl;
      }
      cout<< ans+1 << endl;
    }