/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2016yo/submissions/36911395
 * Submitted at: 2022-12-01 09:10:16
 * Problem URL: https://atcoder.jp/contests/joi2016yo/tasks/joi2016yo_e
 * Result: RE
 * Execution Time: 10081 ms
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

vector<ll> dijkstra(vector<vector<P>> &g, ll n, ll start, ll INF, vector<ll> &prev){
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
        for(ll i=0;i<g[u].size();++i){
            ll nex = g[u][i].first;//to
            ll cost = g[u][i].second;//cost
            if(dst[nex] > d + cost){
                dst[nex] = d + cost;
                que.push(P(dst[nex], nex));
                prev[nex] = u;
            }
        }
    }
    return dst;
}

vector<ll> get_path(vector<ll> prev,ll start, ll goal){
    vector<ll> path;
    for(ll t=goal;t != -1;t = prev[t]) path.push_back(t);
    reverse(path.begin(), path.end());
    return path;
}

int main(){
      ll n,m,k,s,p,q,cnt,inf=(1ll<<60);
      cin>>n>>m>>k>>s>>p>>q;
      cnt=s;
      vector<ll> a(m+9),b(m+9),c(k);
      vector<PB> danger(n,P(false,false));//first:ゾンビ　second:危険
      rep(i,k){
        cin>>c[i];//ゾンビに支配されている
        danger[c[i]].first=true;
        //cout<< " c "<<c[i] << endl;
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
        cnt=s;
        queue<int> q;
        q.push(c[i]);
        while(!q.empty()){
            int v=q.front();
            q.pop();
            //cout<< "v " <<v << ": ";
            for(auto nv:g1[v]){
                dist[nv]=dist[v]+1;
                if(dist[nv]<s)
                q.push(nv);
                danger[nv].second=true;
                //cout<< nv << " ";
            }//cout << endl;
        }
      }
        
      vector<vector<P>> g2(n+9);
      rep(i,m){
        bool az,ad,bz,bd;
        az=danger[a[i]].first;//zombii
        ad=danger[a[i]].second;//danger
        bz=danger[b[i]].first;//zom
        bd=danger[b[i]].second;
        if(a[i]==n) g2[b[i]].push_back(P(a[i],0));
        else if(az) g2[b[i]].push_back(P(a[i],inf));
        else if(ad) g2[b[i]].push_back(P(a[i],q));
        else g2[b[i]].push_back(P(a[i],p));

        if(b[i]==n) g2[a[i]].push_back(P(b[i],0));
        if(bz) g2[a[i]].push_back(P(b[i],inf));
        else if(bd) g2[a[i]].push_back(P(b[i],q));
        else g2[a[i]].push_back(P(b[i],p));
      }

      vector<ll> prev(n+9,-1);
      vector<ll> ans=dijkstra(g2,n,1,(1ll<<60),prev);
      cout<< ans[n] << endl;
    //   vector<ll> path=get_path(prev,1,n);
    //   for(auto v: path) cout<< v << " ";
    //   cout << endl;
    //   for(auto v:path)cout<< ans[v] << " ";
    //   cout<<endl;
      
      

    }
