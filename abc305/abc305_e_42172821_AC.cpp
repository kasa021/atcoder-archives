/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42172821
 * Submitted at: 2023-06-10 15:14:38
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_e
 * Result: AC
 * Execution Time: 256 ms
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


int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> height(200009, -1);
    graph g(200009);
    rep(i,m){
        int a, b;
        cin>>a>>b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    priority_queue<P, vector<P>> pq;
    rep(i,k){
        int p, h;
        cin>>p>>h;
        p--;
        pq.push(make_pair(h, p));
    }
    while(!pq.empty()){
        P v = pq.top();
        pq.pop();
        if(v.first <= height[v.second]) continue;
        height[v.second] = v.first;
        for(auto nv:g[v.second]){
            if(height[nv]<v.first-1){
                pq.push(make_pair(v.first-1, nv));
            }
        }
    }
    vector<int> ans;
    rep(i,n){
        if(height[i]>=0){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    rep(i,ans.size()){
        cout << ans[i]+1 << " ";
    }
    cout << endl;
}