/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/36846508
 * Submitted at: 2022-11-27 10:14:56
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_d
 * Result: AC
 * Execution Time: 97 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;


int main() {
    int n,m;
    ll ans=0;
    cin>>n>>m;
    priority_queue<ll, vector<ll>, greater<ll>> a;
    rep(i,n){
        int x;
        cin>>x;
        a.push(x);
    }
    vector<P> cb(m);
    
    rep(i,m){
        int b,c;
        cin>>b>>c;
        cb[i]=P(c,b);
    }
    sort(all(cb));
    reverse(all(cb));
    rep(i,m){
        int cnt=0;
        auto [p,q]=cb[i];
        while(cnt<q && a.top()<p && !a.empty()){
            a.pop();
            cnt++;
        }
        ans+=cnt*p;
    }
    while(!a.empty()){
        ans+=a.top();
        a.pop();
    }
    
    cout<< ans << endl;
}
   
