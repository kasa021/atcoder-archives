/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35128098
 * Submitted at: 2022-09-24 13:13:31
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_c
 * Result: AC
 * Execution Time: 219 ms
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


int n,x,y;
graph  g(200009);
vector<bool> seen(200009,false);
vector<int> pre(200009,-1);
void dfs(int x){
    seen[x]=true;
    for(auto v:g[x]){
        if(seen[v]) continue;

        pre[v]=x;
        dfs(v);
    }
}

 
int main(){
    cin>>n>>x>>y;

    rep(i,n-1){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    dfs(x);
    int now=y;
    vector<int> ans;
    while(now!=-1){
        ans.push_back(now);
        now=pre[now];
    }

    reverse(all(ans));
    rep(i,(int)ans.size()){
        cout<< ans[i] << " ";
    }
    cout<<endl;
}