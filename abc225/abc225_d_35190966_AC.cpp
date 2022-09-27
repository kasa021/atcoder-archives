/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/35190966
 * Submitted at: 2022-09-27 03:41:22
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_d
 * Result: AC
 * Execution Time: 291 ms
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
using P = pair<int,bool>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int n,q,z,cnt=0;
graph g(100009), h(100009);//hはgの逆順


int  dfs1(int a){
    if((int)h[a].size()==0){
        z=a;
        return z;
    }
    for(auto v:h[a]){
        if((int)h[v].size()==0){
            z=v;
            continue;
        }
        dfs1(v);
    }
    return z;
}

void dfs2(int b,vector<int> &pre){
    pre.push_back(b);
    for(auto v:g[b]){
        if((int)g[b].size()==0){
            continue;
        }
        dfs2(v,pre);
    }
}

int main(){
      cin>>n>>q;
      rep(i,q){
        int t;
        cin>>t;
        if(t==1){
            int x,y;
            cin>>x>>y;
            g[x].push_back(y);
            h[y].push_back(x);
        
      }else if(t==2){
        int x,y;
        cin>>x>>y;
        g[x].pop_back();
        h[y].pop_back();
      }else if(t==3){
        int x;
        cin>>x;
        //cout<< "x "<<x << endl;
    //     rep1(i,1,n+1){
    //     for(auto v:h[i]) cout<<i<<" "<<v<<" ";
    //     cout<<endl;
    // }
        vector<int> pre;
        dfs2(dfs1(x),pre);
        cout<<(int)pre.size()<<" ";
        rep(i,(int)pre.size()){
            cout<< pre[i] << " ";
        }
        cout<<endl;
      }
    }
    // rep1(i,1,n+1){
    //     for(auto v:g[i]) cout<<i<<" "<<v<<" ";
    //     cout<<endl;
    // }
}