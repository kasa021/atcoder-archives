/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc085/submissions/37648638
 * Submitted at: 2022-12-31 03:15:17
 * Problem URL: https://atcoder.jp/contests/abc085/tasks/abc085_d
 * Result: AC
 * Execution Time: 389 ms
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
    ll n,h,M=0;
    cin>>n>>h;
    vector<P> w(n);
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        M=max(a,M);
        w[i]=P(b,a);
    }
    sort(all(w),greater<P>());
    ll cnt=0;
    while(h>0){
        if(cnt<n){
            if(w[cnt].first>M) h-=w[cnt].first;
            else h-=M;
            cnt++;
        }else{
            h-=M;
            cnt++;
        }
        
    }
    cout<< cnt << endl;
}
   
