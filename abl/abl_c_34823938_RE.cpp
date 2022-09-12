/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abl/submissions/34823938
 * Submitted at: 2022-09-12 15:03:36
 * Problem URL: https://atcoder.jp/contests/abl/tasks/abl_c
 * Result: RE
 * Execution Time: 116 ms
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
    
        int group(unionfind tree){
          int n = tree.siz.size();
           vector<bool> seen(n,false);
           int ans=0;
           for(int i=0;i<n;i++)
           {
               if(seen[tree.root(i)]) continue;
               seen[tree.root(i)] = true;
               ans++;
           }
           return ans;
    }

int main(){
    int n,m;
    cin>>n>>m;
    unionfind uf(n);
    rep(i,n){
        int a,b;
        cin>>a>>b;
        uf.unite(a,b);
    }
    cout<< group(uf)-1 << endl;
    }
