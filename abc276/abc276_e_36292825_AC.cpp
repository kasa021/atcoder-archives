/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36292825
 * Submitted at: 2022-11-06 16:22:05
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_e
 * Result: AC
 * Execution Time: 53 ms
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

int h,w,sx,sy;

int num(int x,int y){
    return x*w+y;
}

int main(){
      //int h,w,sx,sy;
      cin>>h>>w;
      vector<string> s(h);
      rep(i,h) cin>>s[i];

      unionfind uf(1000009);

      rep(i,h-1){
        rep(j,w){
            if(s[i][j]=='.' && s[i+1][j]=='.') uf.unite(num(i,j),num(i+1,j));
        }
      }

      rep(i,h){
        rep(j,w-1){
            if(s[i][j]=='.' && s[i][j+1]=='.') uf.unite(num(i,j),num(i,j+1));
        }
      }

      rep(i,h) rep(j,w){
        if(s[i][j]=='S') {
            sx=i;
            sy=j;
            //cout<< i<<" "<<j << endl;
        }
      }

      vector<int> mx = {1,0,0,-1};
      vector<int> my = {0,1,-1,0};
 
 //cout<< sx<<" "<<sy << endl;

      rep(i,4){
        rep(j,4){
            int p=num(sx+mx[i],sy+my[i]),q=num(sx+mx[j],sy+my[j]);
            if(p==q) continue;
            if(sx+mx[i]<0||sx+mx[i]>=h||sy+my[i]<0||sy+my[i]>=w||sx+mx[j]<0||sx+mx[j]>=h||sy+my[j]<0||sy+my[j]>=w) continue;
            //cout<< p<<" "<<q << endl;
            if(uf.issame(p,q)){
                cout<< "Yes" << endl;
                return 0;
            }
        }
      }
      cout<< "No" << endl;

    }