/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/39126355
 * Submitted at: 2023-02-23 06:18:53
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_a
 * Result: AC
 * Execution Time: 8 ms
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
    int a,b;
    cin>>a>>b;
    if(a<=b && b<=6*a) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}