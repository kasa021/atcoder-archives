/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/34351794
 * Submitted at: 2022-08-26 14:42:11
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/arc096_a
 * Result: AC
 * Execution Time: 6 ms
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
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    ll ans=10000000000;
    rep1(ab,0,(x+y)*2+1){
        ll sm=c*ab;
        ll xx=x-ab/2;
        ll yy=y-ab/2;
        if(0<xx) sm+=xx*a;
        if(0<yy) sm+=yy*b;
        ans=min(ans,sm);
    }
    cout<<ans<<endl;
}