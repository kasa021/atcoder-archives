/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/ahc020/submissions/42190052
 * Submitted at: 2023-06-11 08:09:13
 * Problem URL: https://atcoder.jp/contests/ahc020/tasks/ahc020_a
 * Result: AC
 * Execution Time: 18 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

struct edge {
    ll to;
    ll cost;
    ll num;  // 辺の番号
};

struct edge_num {
    ll from;
    ll to;
    ll num;  // 辺の番号
};

using graph = vector<vector<edge>>;
const ll INF = 1e18;

ll dictance(ll x1, ll y1, ll x2, ll y2) {  // 距離を返す
    ll res = 0;
    res = (ll) sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return res;
}

// 人と頂点の最短距離と、その最短距離になる頂点番号を返す
vector<P> shortest_distance(vector<ll> &vx, vector<ll> &vy, vector<ll> &peoplex, vector<ll> &peopley) {
    vector<P> res;  // res[i].first: 最短の頂点番号　res[i].second: 最短距離
    rep(i, peoplex.size()) {
        ll dis = 6000, vid = 0;
        rep(j, vx.size()) {
            ll tmp = dictance(vx[j], vy[j], peoplex[i], peopley[i]);
            if (tmp < dis) {
                dis = tmp;
                vid = j;
            }
        }
        res.push_back({ vid, dis });
    }
    return res;
}

vector<ll> dijkstra(ll s, graph &G, vector<ll> &prev) {
    ll n = G.size();
    vector<ll> dist(n, INF);
    priority_queue<P, vector<P>, greater<P>> que;

    dist[s] = 0;
    // prev[s] = s;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        ll v = p.second;
        if (dist[v] < p.first) continue;
        for (auto &e : G[v]) {
            if (dist[e.to] > dist[v] + e.cost) {
                dist[e.to] = dist[v] + e.cost;
                prev[e.to] = v;
                que.push(P(dist[e.to], e.to));
            }
        }
    }

    return dist;
}

vector<ll> get_path(ll t, const vector<ll> &prev) {
    vector<ll> path;
    for (ll u = t; u != prev[u]; u = prev[u]) {
        if (u == -1) break;
        path.push_back(u);
    }
    path.push_back(prev[path.back()]);
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    ll n, m, k;                 //n;頂点数　m;辺の数　k;住民の数
    cin >> n >> m >> k;
    vector<ll> x(109), y(109);  // 頂点の座標
    rep(i, n) cin >> x[i] >> y[i];
    graph g(109);
    map<P, ll> mp;
    rep(i, m) {
        ll a, b, c;
        cin >> a >> b >> c;
        mp[P(min(a - 1, b - 1), max(a - 1, b - 1))] = i;
        g[a - 1].push_back({ b - 1, c, i });  // g[a][i].to: 頂点番号　g[a][i].cost: コスト　g[a][i].num: 辺の番頂点番
        g[b - 1].push_back({ a - 1, c, i });  // 辺iは頂点a, bにつながっている
    }
    vector<ll> peoplex(5009), peopley(5009);  // 住民の座標
    rep(i, k) cin >> peoplex[i] >> peopley[i];

    vector<P> res = shortest_distance(x, y, peoplex, peopley);  // res[i].first: 最短の頂点番号　res[i].second: 最短距離
    vector<ll> radio_waves(109), button(309);
    rep(i, k) {
        if (radio_waves[res[i].first] < res[i].second) radio_waves[res[i].first] = res[i].second;  // 電波の届く範囲、強度を更新
    }

    vector<ll> prev(109, -1);
    vector<ll> dist = dijkstra(0, g, prev);  // dist[i]: 点iからの最短距離
    rep(i, n) {
        if (radio_waves[i] != 0) {
            vector<ll> path = get_path(i, prev);  // 頂点iから頂点0までの最短経路
            rep(j, path.size() - 1) {
                button[mp[P(min(path[j], path[j + 1]), max(path[j], path[j + 1]))]] = 1;
            }
        }
    }
    rep(i, n) {
        cout << radio_waves[i] << " ";
    }
    cout << endl;
    rep(i, m) {
        cout << button[i] << " ";
    }
    cout << endl;
}