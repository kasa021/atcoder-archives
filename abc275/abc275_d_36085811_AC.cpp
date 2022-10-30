/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36085811
 * Submitted at: 2022-10-30 04:44:48
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_d
 * Result: AC
 * Execution Time: 7 ms
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


map<ll,ll> mp;
ll f(ll n){
    if(n==0) return mp[0];
    if(mp[n]!=0) return mp[n];
    return mp[n]=f(n/2)+f(n/3);
}

int main() {
    ll n;
    cin>>n;
    mp[0]=1;
    cout<< f(n) << endl;
}