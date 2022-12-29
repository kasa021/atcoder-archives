/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc168/submissions/37619069
 * Submitted at: 2022-12-29 13:24:05
 * Problem URL: https://atcoder.jp/contests/abc168/tasks/abc168_d
 * Result: AC
 * Execution Time: 255 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n,m;
    cin>>n>>m;
    graph g(n+9);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      a--,b--;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    vector<int> ans(n+9,-1);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(auto nv:g[v]){
            //cout<< nv << endl;
            if(ans[nv]!=-1) continue;
            ans[nv]=v;
            q.push(nv);
        }
    }
    
        cout<< "Yes" << endl;
        rep1(i,1,n)cout<< ans[i] +1<< endl;
    
    
} 
