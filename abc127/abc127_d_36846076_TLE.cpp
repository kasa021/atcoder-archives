/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/36846076
 * Submitted at: 2022-11-27 09:41:33
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_d
 * Result: TLE
 * Execution Time: 2206 ms
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
    map<ll,ll> mp;
    vector<P> cb(m);
    rep(i,n){
        int a;
        cin>>a;
        mp[a]++;
    }
    rep(i,m){
        int b,c;
        cin>>b>>c;
        cb[i]=P(c,b);
    }
    sort(all(cb));
    reverse(all(cb));
    rep(i,m){
        auto [p,q]=cb[i];//p:c, q:b;
        int cnt=0;
        for(auto [nv,v]:mp){
            if(v==0) continue;
            if(nv<p){
                cnt+=v;
                if(cnt<=q){
                    mp[nv]=0;
                }else {
                    mp[nv]=cnt-q;
                    cnt=q;
                    break;
                }
            }
        }
        if(cnt!=0)mp[p]+=cnt;
    //     for(auto [s,t]:mp){
    //     cout<< s<<" "<<t << endl;
    // }
    //cout<<endl;
    }
    for(auto [p,q]:mp){
        ans+=p*q;
        //cout<< p<<" "<<q << endl;
    }
    cout<< ans << endl;
}
   
