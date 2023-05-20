/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41582516
 * Submitted at: 2023-05-20 13:57:40
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: AC
 * Execution Time: 10 ms
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
    int n, m,counter=0;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    sort(s.begin(),s.end());
    vector<int> a(n);
    rep(i, n) a[i] = i;
    do
    {
        bool ok=true;
        rep(i,n-1){
            int cnt=0;
            rep(j,m){
                if(s[i][j]!=s[i+1][j]) cnt++;
            }
            if(cnt!=1) ok=false;
        }
        if(ok){
            cout<< "Yes" << endl;
            return 0;
        }
    } while (next_permutation(all(s)));
    cout<< "No" << endl;
}