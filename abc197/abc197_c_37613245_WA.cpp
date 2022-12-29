/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc197/submissions/37613245
 * Submitted at: 2022-12-29 07:53:18
 * Problem URL: https://atcoder.jp/contests/abc197/tasks/abc197_c
 * Result: WA
 * Execution Time: 49 ms
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
// typedef modint1000000007 mint;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n),ans;
    rep(i,n){
        cin>>a[i];
    }
    rep(i,(1<<n)){
        ans.push_back(a[0]);
        rep1(j,1,n){
            if(i & (1<<j)) ans[i]|=a[j];
            else ans[i]^=a[j];
        }
    }
    cout<< *min_element(all(ans)) << endl;
}
