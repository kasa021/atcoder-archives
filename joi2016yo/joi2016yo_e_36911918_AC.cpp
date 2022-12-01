/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2016yo/submissions/36911918
 * Submitted at: 2022-12-01 09:53:26
 * Problem URL: https://atcoder.jp/contests/joi2016yo/tasks/joi2016yo_e
 * Result: AC
 * Execution Time: 139 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif
using ll = long long;
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

using P = pair<ll,ll>;
using PB=pair<bool,bool>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;

vector<ll> dijkstra(vector<vector<ll>> &g, ll n, ll start, ll INF, vector<bool> &zombie,vector<bool> &danger,ll &p,ll &q){
    priority_queue< P, vector<P>, greater<P> > que;
    vector<ll> dst(n+9, INF);
    vector<bool> seen(n+9,false);
    dst[start] = 0;
    que.push(P(0, start));
    while(!que.empty()){
        ll d = que.top().first;
        ll u = que.top().second;
        que.pop();
        if(seen[u]) continue;
        seen[u]=true;
        for(ll i=0;i<(int)g[u].size();++i){
            ll nex = g[u][i];//to
            if(zombie[nex]) continue;
            ll cost=p;
            if(danger[nex]) cost=q;
            if(nex==n) cost=0;
            if(dst[nex] > d + cost){
                dst[nex] = d + cost;
                que.push(P(dst[nex], nex));
                
            }
        }
    }
    return dst;
}



int main(){
      ll n,m,k,s,pp,qq,inf=(1ll<<60),c;
      cin>>n>>m>>k>>s>>pp>>qq;
      
      vector<ll> a(m+9),b(m+9);
      vector<bool> danger(n+9,false),zombie(n+9,false);
      queue<ll> q;
      rep(i,k){
        cin>>c;//ゾンビに支配されている
        zombie[c]=true;
        q.push(c);
      } 
      graph g1(n+9);
      rep(i,m){
        cin>>a[i]>>b[i];
        //cout<< a[i]<<" "<<b[i] << endl;
        g1[a[i]].push_back(b[i]);
        g1[b[i]].push_back(a[i]);
      }
      vector<ll> dist(n+9,0);
      rep(i,k){
        while(!q.empty()){
            ll v=q.front();
            q.pop();
            //cout<< "v " <<v << ": ";
            for(auto nv:g1[v]){
                if(danger[nv]) continue;
                dist[nv]=dist[v]+1;
                if(dist[nv]<s)
                q.push(nv);
                danger[nv]=true;
                //cout<< nv << " ";
            }//cout << endl;
        }
      }
      
    vector<ll> ans=dijkstra(g1,n,1,inf,zombie,danger,pp,qq);
    cout<< ans[n] << endl;
    // rep(i,n){
    //     if(zombie[i]) cout<< i << " ";
    // }cout << endl;
    // rep(i,n){
    //     if(danger[i]) cout<< i << " ";
    // }cout << endl;

      
      

    }
