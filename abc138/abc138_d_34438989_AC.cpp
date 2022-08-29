/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/34438989
 * Submitted at: 2022-08-29 07:23:48
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_d
 * Result: AC
 * Execution Time: 502 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

vector<int> to[200005];
vector<int> ans;

void dfs(int v,int p=-1){
    for(int u:to[v]){
        if(u==p) continue;
        ans[u]+=ans[v];
        dfs(u,v);
    }
}

int main() {
    int n,q;
    cin>>n>>q;
    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--; b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    ans.resize(n);
    rep(i,q){
        int p,x;
        cin>>p>>x;
        p--;
        ans[p]+=x;
    }
    dfs(0);
    rep(i,n) cout<<ans[i]<<endl;
    return 0;
}