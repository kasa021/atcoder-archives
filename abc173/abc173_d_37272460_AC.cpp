/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc173/submissions/37272460
 * Submitted at: 2022-12-14 14:21:37
 * Problem URL: https://atcoder.jp/contests/abc173/tasks/abc173_d
 * Result: AC
 * Execution Time: 84 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    ll n,sum=0;
    cin>>n;
    vector<ll> a(n);
    rep(i,n)cin>>a[i];
    sort(all(a),greater<ll>());
    sum=a[0];
    rep(i,n-2){
        sum+=a[i/2+1];
    }
    cout<< sum << endl;
    }
