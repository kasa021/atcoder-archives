/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc054/submissions/35824164
 * Submitted at: 2022-10-21 04:56:26
 * Problem URL: https://atcoder.jp/contests/arc054/tasks/arc054_b
 * Result: AC
 * Execution Time: 92 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;


int main() {

    double P;
    cin >> P;

    // 目的関数(最小化したい)
    auto f = [P](double x) {
        return x + P / pow(2, x / 1.5);
    };

    // 左側
    double low = 0;
    // 右側
    double high = 1e9;

    // 500回繰り返す
    int cnt = 500;
    while (cnt--) {
        double c1 = (low * 2 + high) / 3;
        double c2 = (low + high * 2) / 3;

        // もしf(c2)のほうが良い(小さい)なら、駄目な方lowを更新する
        if (f(c1) > f(c2)) low = c1;
        else high = c2;
    }

    cout << fixed << setprecision(20) << f(low) << endl;

}