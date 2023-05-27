/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc303/submissions/41778428
 * Submitted at: 2023-05-27 14:23:19
 * Problem URL: https://atcoder.jp/contests/abc303/tasks/abc303_e
 * Result: AC
 * Execution Time: 144 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()


int main() {
    int n;
    cin>>n;
    graph g(n);
    rep(i,n-1){
        int u,v;
        cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> ans;
    vector<bool> visited(n,false);
    queue<int> q;
    rep(i,n){
        if(g[i].size()>2){
            q.push(i);
        }
    }
    while(!q.empty()){
        int v=q.front();
        q.pop();
        visited[v]=true;
        ans.push_back(g[v].size());
        for(auto nv:g[v]){
            visited[nv]=true;
        }
    }
    int cnt=0;
    rep(i,n){
        if(!visited[i]){
            cnt++;
        }
    }
    rep(i,cnt/3){
        ans.push_back(2);
    }
    sort(all(ans));
    for(auto a:ans){
        cout<<a<<" ";
    }cout<<endl;
}