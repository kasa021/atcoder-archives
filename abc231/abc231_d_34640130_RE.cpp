/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/34640130
 * Submitted at: 2022-09-05 14:00:40
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_d
 * Result: RE
 * Execution Time: 118 ms
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

struct unionfind {
     vector<int> par, rank, siz;

     unionfind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

     int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]);
     }

     bool issame(int x, int y) {
         return root(x)==root(y);
     }

     bool unite(int x, int y) {
        int rx = root(x), ry = root(y);
        if (rx==ry) return false;

        if (rank[rx]<rank[ry]) swap(rx, ry);
        par[ry] = rx;
        if (rank[rx]==rank[ry]) rank[rx]++;
        siz[rx] += siz[ry];
        return true;
     }

   int size(int x) {
        return siz[root(x)];
    }
};


int main(){
      int n,m;
      cin>>n>>m;
       unionfind uf(n);
      vector<int> a(m), b(m);
      graph g(n);
      rep(i,m){
       cin>>a[i]>>b[i];
       if(uf.issame(a[i],b[i])){
        cout<<"No"<<endl;
        return 0;
       }
       uf.unite(a[i],b[i]);
       g[a[i]].push_back(b[i]);
       g[b[i]].push_back(a[i]);
      }
      bool f=true;
      rep(i,n){
        int size=g[i].size();
        if(size>2) f=false;
      }
      if(!f){
        cout<<"No"<<endl;
        //cout<<"a";
        return 0;
      }else{
        
        cout<<"Yes"<<endl;
      }
    }