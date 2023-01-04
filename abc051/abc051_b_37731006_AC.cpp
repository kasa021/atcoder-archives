/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc051/submissions/37731006
 * Submitted at: 2023-01-04 10:14:19
 * Problem URL: https://atcoder.jp/contests/abc051/tasks/abc051_b
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int k,s,ans=0;
    cin>>k>>s;
    rep(i,k+1){
        rep(j,k+1){
            int l;
            l=s-i-j;
            if(0<=l && l<=k) ans++;
        }
    }
    cout<< ans << endl;
}
