/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41945270
 * Submitted at: 2023-06-03 12:15:27
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_c
 * Result: WA
 * Execution Time: 60 ms
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

int distance(int x1, int y1, int x2, int y2){
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
    int n,d;
    cin >> n>>d;
    d=d*d;
    vector<int> x(n),y(n);
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    vector<bool> ans(n,false);
    ans[0]=true;
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(distance(x[i],y[i],x[j],y[j])<=d && (ans[j] || ans[i])){
                ans[i]=true;
                ans[j]=true;
            }
        }
    }
    rep(i, n) {
        rep(j, n) {
            if (i == j) continue;
            if (distance(x[i], y[i], x[j], y[j]) <= d && (ans[j] || ans[i])) {
                ans[i] = true;
                ans[j] = true;
            }
        }
    }
    rep(i,n){
        if(ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}