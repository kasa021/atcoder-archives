/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2014yo/submissions/36912610
 * Submitted at: 2022-12-01 10:45:22
 * Problem URL: https://atcoder.jp/contests/joi2014yo/tasks/joi2014yo_e
 * Result: AC
 * Execution Time: 4920 ms
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
      vector<int>c(n+9),r(n+9);
      rep1(i,1,n+1) {
        cin>>c[i]>>r[i];
      }
      graph g(n+1);
      rep(i,k){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      queue<int> q;
      vector<vector<P>> g2(n+9);
      rep1(i,1,n+1){
        q.push(i);
        vector<bool> seen(n+9,false);
        map<int,int> dist;
        //cout<< i << endl;
        while(!q.empty()){
            int v=q.front();
            q.pop();
            for(auto nv:g[v]){
                if(seen[nv]) continue;
                seen[nv]=true;
                dist[nv]=dist[v]+1;
                if(dist[nv]<r[i]){
                    q.push(nv);
                    g2[i].push_back(P(nv,c[i]));
                }else if(dist[nv]==r[i]){
                    g2[i].push_back(P(nv,c[i]));
                }
            }
        }
      }
      vector<int> prev(n+9,-1);
      vector<int> ans=dijkstra(g2,n,1,INT_MAX,prev);
      cout<< ans[n] << endl;
      vector<int> path=get_path(prev,1,n);
    //   for(auto v: path)cout<< v << " ";
    //   cout << endl;

    }
