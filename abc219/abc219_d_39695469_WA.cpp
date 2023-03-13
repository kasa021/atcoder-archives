/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39695469
 * Submitted at: 2023-03-13 05:18:57
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_d
 * Result: WA
 * Execution Time: 7 ms
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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n), b(n);
    vector<bool> used(n, false);
    rep(i, n) cin >> a[i] >> b[i];
    int nowx = 0, nowy = 0, idx = 0, M = 0,ans=0;
    rep(i, n)
    {
        M = 0;
        if (nowx >= x && nowy >= y)
            break;
        rep(j, n)
        {
            if (used[j])
                continue;
            if (M < min(x, a[j]+nowx) * min(y, b[j]+nowy) - nowx * nowy)
            {
                M = min(x, a[j]+nowx) * min(y, b[j]+nowy) - nowx * nowy;
                idx=j;
            }
        }
        used[idx]=true;
        nowx+=a[idx];
        nowy+=b[idx];
        //cout<< idx<<" "<<a[idx]<<" "<<b[idx] << endl;
        ans++;
    }
    
    //cout<< nowx<<" "<<nowy << endl;
    cout << (nowx >= x && nowy >= y ? ans : -1) << endl;
}