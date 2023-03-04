/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/39451465
 * Submitted at: 2023-03-04 16:46:16
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_e
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;


int main()
{
    int n,m;
    cin>>n>>m;
    graph g(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        g[u-1].push_back(v-1);
    }

    int ans=0;
    rep(i,n){
        vector<bool> f(n,false);
        f[i]=true;
        queue<int> q;
        q.push(i);

        while(q.size()>0){
            int x=q.front();
            q.pop();
            rep(j,g[x].size()){
                int y=g[x][j];
                if(f[y]) continue;
                f[y]=true;
                q.push(y);
                ans++;
            }
        }
    }
    ans-=m;
    cout<< ans << endl;
}