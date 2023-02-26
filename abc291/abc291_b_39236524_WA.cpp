/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc291/submissions/39236524
 * Submitted at: 2023-02-26 12:10:20
 * Problem URL: https://atcoder.jp/contests/abc291/tasks/abc291_b
 * Result: WA
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
    int n;
    cin>>n;
    vector<double> x(5*n);
    rep(i,5*n) cin>>x[i];
    sort(all(x));
    double ans=0;
    int cnt=0;
    rep1(i,n,4*n){
        ans+=x[i];
        cout<< x[i] << endl;
    }
    cout<<fixed<< setprecision(10) << ans/3 << endl;

}