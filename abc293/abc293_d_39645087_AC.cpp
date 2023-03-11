/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc293/submissions/39645087
 * Submitted at: 2023-03-11 14:04:21
 * Problem URL: https://atcoder.jp/contests/abc293/tasks/abc293_d
 * Result: AC
 * Execution Time: 128 ms
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
using P = pair<int, char>;
using T = tuple<int, int, int>;
using graph = vector<vector<P>>;

bool f=false;
void dfs(vector<P> &gr, vector<P> &gb, int v, char now, int init, char initc, int cnt)
{
    //cout<< v <<" "<<now<<" "<<cnt<< endl;
    if (cnt != 0 && v == init)
    {
        f=true;        
    }
    else
    {
        if (now == 'R')
        {
            if (gb[v].first == -1) return;
            else
            {
                dfs(gr, gb, gb[v].first, gb[v].second, init, initc, cnt + 1);
            }
        }
        else
        {
            if (gr[v].first == -1) return;
            else
            {
                dfs(gr, gb, gr[v].first, gr[v].second, init, initc, cnt + 1);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<P> gr(200009, P(-1, 'a')), gb(200009, P(-1, 'a'));
    dsu uf(200009);
    rep(i, m)
    {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        uf.merge(a, c);
        if (b == 'R' && d == 'R')
        {
            gr[a] = P(c, d);
            gr[c] = P(a, b);
        }
        else if (b == 'R' && d == 'B')
        {
            gr[a] = P(c, d);
            gb[c] = P(a, b);
        }
        else if (b == 'B' && d == 'R')
        {
            gb[a] = P(c, d);
            gr[c] = P(a, b);
        }
        else if (b == 'B' && d == 'B')
        {
            gb[a] = P(c, d);
            gb[c] = P(a, b);
        }
    }
    int x = 0, y = 0;
    char now = 'R';
    rep1(i, 1, n + 1)
    {
        if (i == uf.leader(i))
        {
            f=false;
            dfs(gr, gb, i, now, i, now, 0);
            if (f)
                x++;
            else
                y++;
        }
    }
    cout << x << " " << y << endl;
}