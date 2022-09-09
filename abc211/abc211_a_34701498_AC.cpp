/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/34701498
 * Submitted at: 2022-09-09 05:56:33
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    double a,b;
    cin>>a>>b;
    double ans=(a-b)/3+b;
    printf("%.10f\n",ans);
}