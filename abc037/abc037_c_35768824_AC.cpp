/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/35768824
 * Submitted at: 2022-10-18 09:32:09
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_c
 * Result: AC
 * Execution Time: 40 ms
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



int main() {
    int k,n;
    cin>>n>>k;
    vector<ll> a(n+9);
    rep(i,n)cin>>a[i];

    //rep(i,n)cout<< a[i] <<" ";
    vector<ll> csa(n + 1);
    csa[0] = 0;
    for (int i = 0; i < n; i++)
        csa[i + 1] = csa[i] + a[i];

    ll ans=0;
    rep(i,n-k+1){
        ans+=(csa[k+i]-csa[i]);
    }
    cout<< ans << endl;
}