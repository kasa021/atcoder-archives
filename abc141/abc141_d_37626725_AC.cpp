/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/37626725
 * Submitted at: 2022-12-30 03:10:00
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_d
 * Result: AC
 * Execution Time: 56 ms
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
    ll n,m,sum=0;
    cin>>n>>m;
    priority_queue<ll> q;
    rep(i,n){
        ll a;
        cin>>a;
        q.push(a);
    }
    while(m){
        ll t=q.top();
        q.pop();
        q.push(t/2);
        m--;
    }
    while(!q.empty()){
        sum+=q.top();
        q.pop();
    }
    cout<< sum << endl;

}
