/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/38330942
 * Submitted at: 2023-01-26 05:52:43
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_d
 * Result: AC
 * Execution Time: 251 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n,q;
    cin>>n>>q;
    graph g(n+9);
    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool> bw(n+9,false),seen(n+9,false);
    bw[0]=true;
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        int v;
        v=que.front();que.pop();
        seen[v]=true;
        for(auto nv:g[v]){
            if(seen[nv]) continue;
            bw[nv]=!bw[v];
            que.push(nv);
        }
    }
    rep(i,q){
        int c,d;
        cin>>c>>d;
        c--,d--;
        if(bw[c]!=bw[d]) cout<< "Road" << endl;
        else cout<<"Town"<<endl;
    }

}
