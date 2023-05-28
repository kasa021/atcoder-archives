/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc147/submissions/41789893
 * Submitted at: 2023-05-28 03:55:16
 * Problem URL: https://atcoder.jp/contests/abc147/tasks/abc147_c
 * Result: AC
 * Execution Time: 14 ms
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
    int n;
    cin >> n;
    vector<vector<int>> x(n), y(n);
    rep(i,n){
        int a;
        cin>>a;
        x[i].resize(a);
        y[i].resize(a);
        rep(j,a){
            cin>>x[i][j]>>y[i][j];
            x[i][j]--;
        }
    }
    int ans=0;
    rep(i,(1<<n)){
        bool ok=true;
        rep(j,n){
            if(i & (1<<j)){
                rep(k,x[j].size()){
                    if(y[j][k] == 1 && !(i & (1<<x[j][k]))){
                        ok=false;
                    }
                    if(y[j][k] == 0 && (i & (1<<x[j][k]))){
                        ok=false;
                    }
                }
            }
        }
        if(ok){
            ans=max(ans,__builtin_popcount(i));
        }
    }
    cout<< ans << endl;
}