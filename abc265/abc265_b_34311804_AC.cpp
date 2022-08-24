/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34311804
 * Submitted at: 2022-08-24 12:00:38
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_b
 * Result: AC
 * Execution Time: 109 ms
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
    ll n,m,t;
    cin>>n>>m>>t;
    vector<ll> a(n-1);
    rep(i,n-1) cin>>a[i];
    map<ll,ll> mp;
    rep(_,m){
        ll x,y;
        cin>>x>>y;
        mp[x-2]=y;
    }
    rep(i,n-1){
        if(t>a[i]){
            t-=a[i];
            t+=mp[i];
        }else {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    
}