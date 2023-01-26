/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc117/submissions/38330011
 * Submitted at: 2023-01-26 04:33:24
 * Problem URL: https://atcoder.jp/contests/arc117/tasks/arc117_b
 * Result: AC
 * Execution Time: 45 ms
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
typedef modint1000000007 mint;
int main()
{
    int n;
    cin>>n;
    mint ans=1;
    vector<int> a(n+1);
    a[0]=0;
    rep1(i,1,n+1) cin>>a[i];
    sort(all(a));
    rep(i,n){
        ans*=(a[i+1]-a[i]+1);
        //cout<< a[i+1]-a[i]+1 << endl;
    }
    cout<< ans.val() << endl;
}
