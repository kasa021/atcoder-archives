/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2008yo/submissions/36900353
 * Submitted at: 2022-11-30 14:09:59
 * Problem URL: https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_f
 * Result: AC
 * Execution Time: 102 ms
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
using graph=vector<vector<P>>;

vector<int> dijkstra(vector<vector<P>> &g, int n, int start, int INF, vector<int> &prev){
    priority_queue< P, vector<P>, greater<P> > que;
    vector<int> dst(n+9, INF);
    vector<bool> seen(n+9,false);
    dst[start] = 0;
    que.push(P(0, start));
    while(!que.empty()){
        int d = que.top().first;
        int u = que.top().second;
        que.pop();
        if(seen[u]) continue;
        seen[u]=true;
        for(int i=0;i<g[u].size();++i){
            int nex = g[u][i].first;//to
            int cost = g[u][i].second;//cost
            if(dst[nex] > d + cost){
                dst[nex] = d + cost;
                que.push(P(dst[nex], nex));
                prev[nex] = u;
            }
        }
    }
    return dst;
}

vector<int> get_path(vector<int> prev,int start, int goal){
    vector<int> path;
    for(int t=goal;t != -1;t = prev[t]) path.push_back(t);
    reverse(path.begin(), path.end());
    return path;
}

int main(){
      int n,k;
      cin>>n>>k;
      graph g(n+9);
      rep(i,k){
        int t;
        cin>>t;
        if(t==1){
            int a,b,c;
            cin>>a>>b>>c;
            g[a].push_back(P(b,c));
            g[b].push_back(P(a,c));
        }else {
            int s,r;
            cin>>s>>r;
            vector<int> prev(n+9,-1);
            vector<int> ans=dijkstra(g,n,s,INT_MAX,prev);
            if(ans[r]==INT_MAX) cout<< "-1" << endl;
            else cout<< ans[r] << endl;
        }
      }
    }
