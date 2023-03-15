/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc129/submissions/39740435
 * Submitted at: 2023-03-15 04:33:34
 * Problem URL: https://atcoder.jp/contests/arc129/tasks/arc129_a
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
using ull = unsigned long long;
// typedef modint1000000007 mint;

int main()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll ans=0;
    rep(i,64){
        if(n & 1LL<<i){
            ll m=max(l,1LL<<i);
            ll M=min(r+1,2LL<<i);
            if(l<=M && m <=r) ans+=M-m;
        }
    }
    cout<< ans << endl;
}
