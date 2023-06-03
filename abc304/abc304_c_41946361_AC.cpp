/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41946361
 * Submitted at: 2023-06-03 12:17:12
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_c
 * Result: AC
 * Execution Time: 27 ms
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
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int now=q.front();
        q.pop();
        rep(i,n){
            if(ans[i]) continue;
            if(distance(x[now],y[now],x[i],y[i])<=d){
                ans[i]=true;
                q.push(i);
            }
        }
    }

    rep(i,n){
        if(ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}