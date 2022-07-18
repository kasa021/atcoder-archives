/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/33345791
 * Submitted at: 2022-07-18 13:11:25
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_c
 * Result: AC
 * Execution Time: 69 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph=vector<vector<int>>;

int main(){
      int n;
      cin>>n;
      graph g(n+1);
      for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }

      vector<int> dist(n+1,-1);
      queue<int> que;
      dist[1]=0;
      que.push(1);

      while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto next_v:g[v]){
            if(dist[next_v]!=-1){
                continue;
            }

            dist[next_v]=dist[v]+1;
            que.push(next_v);
        }
      }
      int result=0,indx=0;
      for(int i=1;i<=n;i++){
        if(result<dist[i]){
            result=dist[i];
            indx=i;
        }
      }
      //cout<<result<<" "<<indx<<endl;

      vector<int> dist2(n+1,-1);
      queue<int> que2;
      dist2[indx]=0;
      que2.push(indx);

      while(!que2.empty()){
        int v=que2.front();
        que2.pop();
        for(auto next_v:g[v]){
            if(dist2[next_v]!=-1){
                continue;
            }

            dist2[next_v]=dist2[v]+1;
            que2.push(next_v);
        }
      }

      int ans=0;
      for(int i=1;i<n;i++){
        ans=max(ans,dist2[i]);
      }      
      cout<<ans+1<<endl;
    }