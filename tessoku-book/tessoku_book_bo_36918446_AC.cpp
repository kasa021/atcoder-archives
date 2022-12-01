/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/36918446
 * Submitted at: 2022-12-01 16:41:59
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bo
 * Result: AC
 * Execution Time: 74 ms
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
      vector<int> a(m),b(m),c(m);
      rep(i,m) cin>>a[i]>>b[i]>>c[i];

      vector<P> edgelist;
      rep(i,m) edgelist.push_back(P(c[i],i));//c[i]:重み
      sort(all(edgelist));

      unionfind uf(n+1);
      int ans=0;
      rep(i,m){
        auto [cost,idx] = edgelist[i];
        if(uf.issame(a[idx],b[idx])==false){
            uf.unite(a[idx],b[idx]);
            ans+=c[idx];
        }
      }
      cout<< ans << endl;
    }
