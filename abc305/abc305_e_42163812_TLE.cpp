/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42163812
 * Submitted at: 2023-06-10 13:35:16
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_e
 * Result: TLE
 * Execution Time: 2206 ms
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
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

vector<int> height(200009, -1);
graph g(200009);
vector<P> p(200009);

void dfs(int v){
    for(auto nv: g[v]){
        if(height[nv] +1 < height[v]){
            height[nv] = height[v] - 1;
            dfs(nv);
        }
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    rep(i,m){
        int a, b;
        cin>>a>>b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i,k){
        int pp, h;
        cin>>pp>>h;
        pp--;
        p[i] = make_pair(h,pp);
        height[pp] = h;
    }
    sort(all(p), greater<P>());
    rep(i,n){
        if(p[i].first == 0) continue;
        dfs(p[i].second);
    }
    vector<int> ans;
    rep(i,n){
        if(height[i] >= 0) ans.push_back(i);
    }
    sort(all(ans));
    cout<<ans.size()<<endl;
    for(auto v: ans){
        cout << v + 1 << " ";
    }
    cout << endl;
}