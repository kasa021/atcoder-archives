/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/38835158
 * Submitted at: 2023-02-12 05:41:53
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/arc076_a
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
using mint = modint1000000007;
int main()
{
    int n,m,now=1;
    cin>>n>>m;
    mint ans=1;
    rep1(i,1,max(n,m)+1){
        if(i<=min(n,m)){
            ans*=i;
            ans*=i;
        }
        else ans*=i;
    }
    if(n==m) ans*=2;
    else if(abs(n-m)>1) ans=0;
    cout<< ans.val() << endl;
}