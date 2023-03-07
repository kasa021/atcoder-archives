/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/39505857
 * Submitted at: 2023-03-07 05:33:16
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_e
 * Result: AC
 * Execution Time: 228 ms
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
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    int ans = 0;
    vector<P> light(n);
    vector<vector<int>> field1(h + 9, vector<int>(w + 9, 0)), field2(h + 9, vector<int>(w + 9, 0));
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        light[i] = P(a, b);
    }
    rep(i, m)
    {
        int c, d;
        cin >> c >> d;
        c--, d--;
        field1[c][d] = -1;
        field2[c][d] = -1;
    }
    vector<int> mx = {1, -1, 0, 0};
    vector<int> my = {0, 0, 1, -1};
    rep(i, n)
    {
        if (field1[light[i].first][light[i].second] > 0)
            continue;
        field1[light[i].first][light[i].second]++;
        rep(j, 2)
        {
            int nx = mx[j] + light[i].first;
            int ny = my[j] + light[i].second;
            while ((nx >= 0 && nx < h && ny >= 0 && ny < w) && field1[nx][ny] == 0)
            {
                field1[nx][ny]++;
                //cout << "ans " << ans << " " << nx << " " << ny << endl;
                nx += mx[j];
                ny += my[j];
            }
        }
    }
    rep(i, n)
    {
        if (field2[light[i].first][light[i].second] > 0)
            continue;
        field2[light[i].first][light[i].second]++;
        rep1(j,2, 4)
        {
            int nx = mx[j] + light[i].first;
            int ny = my[j] + light[i].second;
            while ((nx >= 0 && nx < h && ny >= 0 && ny < w) && field2[nx][ny] == 0)
            {
                field2[nx][ny]++;
                //cout << "ans " << ans << " " << nx << " " << ny << endl;
                nx += mx[j];
                ny += my[j];
            }
        }
    }
    rep(i,h){
        rep(j,w){
            if(field1[i][j]>0 || field2[i][j]>0) ans++;
        }
    }
    cout<< ans << endl;
}
