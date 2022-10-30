/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36085523
 * Submitted at: 2022-10-30 04:26:41
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_b
 * Result: WA
 * Execution Time: 17 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

const ll mod=998244353;

int main() {
    vector<ll> a(7);
    rep(i,6){
        cin>>a[i];
        a[i]%=mod;
    }
    ll b,c;
    b=(((a[0]*a[1])%mod)*a[2])%mod;
    c=(((a[3]*a[4])%mod)*a[5])%mod;
    cout<< (b-c)%mod << endl;
}