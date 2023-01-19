/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/38146249
 * Submitted at: 2023-01-19 02:43:31
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_d
 * Result: AC
 * Execution Time: 133 ms
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
    //cout<< "ans" << endl;
    graph g(n+1);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      a--,b--;
      g[a].push_back(b);
      g[b].push_back(a);
    }  

    vector<mint> time(n+1,-1),cnt(n+1);
    time[0]=0;
    cnt[0]=1;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(auto nv:g[v]){
            if(time[nv]==-1) time[nv]=time[v]+1,q.push(nv);
            if(time[nv]-time[v]==1) cnt[nv]+=cnt[v];
            
        }
    }
    cout<< cnt[n-1].val() << endl;
    // rep(i,n) cout<< cnt[i].val() << endl;
    // cout<<endl;
    // rep(i,n) cout<< time[i].val() << endl;
}
