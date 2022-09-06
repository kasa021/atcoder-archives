/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/34658915
 * Submitted at: 2022-09-06 14:02:00
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_c
 * Result: AC
 * Execution Time: 154 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    ll n,w;
    cin>>n>>w;
    vector<P> p(n);
    rep(i,n) {
        ll a,b;
        cin>>a>>b;
        p[i]=P(a,b);
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    ll wi=0,cnt=0,i=0;
    while(wi<=w&&i<n){
        ll a=p[i].first,b=p[i].second;
        cnt+=a*b;
        i++;
        wi+=b;
    }
    if(wi>w){
        ll a=wi-w;
        cnt-=a*p[i-1].first;
    }
    cout<< cnt << endl;
   

}