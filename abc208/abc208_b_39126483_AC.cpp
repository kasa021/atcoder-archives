/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/39126483
 * Submitted at: 2023-02-23 06:24:42
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_b
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

int main()
{
    ll p=0;
    cin>>p;
    vector<ll> money(20,1);
    rep1(i,1,11){
        rep(j,i) money[i]*=j+1;
    }
    //rep1(i,1,11)cout<< money[i] << endl;
    int ans=0;
    for(int i=10;i>=1;i--){
        while(p-money[i]>=0){
            p-=money[i];
            ans++;
        }
    }
    cout<< ans << endl;
}