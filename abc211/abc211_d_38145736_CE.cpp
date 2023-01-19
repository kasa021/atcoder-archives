/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/38145736
 * Submitted at: 2023-01-19 02:10:30
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_d
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
typedef modint1000000007 mint;
int main()
{
    int n,m;
    cin>>n>>m;
    cout<< "ans" << endl;
    graph g(n+1);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      a--,b--;
      g[a].push_back(b);
      g[b].push_back(a);
    }   

    vector<mint> time(n+1),cnt(n+1);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int v=q.top();q.pop();
        for(auto nv:g[v]){
            if(time[nv]==0) time[nv]=time[v]+1;
            if(time[nv]-time[n]==1) cnt[nv]+=cnt[v];
        }
    }
    cout<< cnt[n-1].val() << endl;
}
