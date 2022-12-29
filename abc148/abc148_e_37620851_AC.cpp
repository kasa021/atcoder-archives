/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/37620851
 * Submitted at: 2022-12-29 14:59:34
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_e
 * Result: AC
 * Execution Time: 9 ms
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
    ll n,cnt2=0,cnt5=0;
    cin>>n;
    if(n%2){
        cout<< 0 << endl;
    }else{
        for(ll i=2;i<=n;i*=2){
            cnt2+=n/i;
        }
        for(ll i=5;i<=n;i*=5){
            cnt5+=(n/i)/2;
        }
       // cout<< cnt2<<" "<<cnt5 << endl;
        cout<< min(cnt2,cnt5) << endl;
    }
}
