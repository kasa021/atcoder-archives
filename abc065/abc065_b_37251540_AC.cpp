/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/37251540
 * Submitted at: 2022-12-13 11:37:18
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/abc065_b
 * Result: AC
 * Execution Time: 44 ms
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
//typedef modint1000000007 mint;


int main(){
    int n;
    cin>>n;
    graph g(100009);
    rep1(i,1,n+1){
      int a;
      cin>>a;
      g[i].push_back(a);
    }
    
    queue<int> q;
    vector<int> dist(100009,-1);
    dist[1]=0;
    q.push(1);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto nv:g[v]){
            if(dist[nv]==-1){
                dist[nv]=dist[v]+1;
                q.push(nv);
            }
        }
    }
    cout<< dist[2] << endl;
    }
