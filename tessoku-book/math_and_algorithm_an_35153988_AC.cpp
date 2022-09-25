/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35153988
 * Submitted at: 2022-09-25 05:16:17
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_an
 * Result: AC
 * Execution Time: 216 ms
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

vector<int> dist(100009);
graph g(100009);
queue<int> q;


int main(){
      int n,m;
      cin>>n>>m;
      //graph g(n+1);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }

      rep1(i,1,n+1) dist[i]=-1;
      q.push(1);
      dist[1]=0;
      while(!q.empty()){
        int pos=q.front();q.pop();
        for(auto nv:g[pos]){
            if(dist[nv]==-1){
                dist[nv]=dist[pos]+1;
                q.push(nv);
            }
        }
      }
      rep1(i,1,n+1) cout<< dist[i] << endl;
    }