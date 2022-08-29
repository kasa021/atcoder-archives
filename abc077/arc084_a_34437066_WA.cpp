/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc077/submissions/34437066
 * Submitted at: 2022-08-29 05:19:30
 * Problem URL: https://atcoder.jp/contests/abc077/tasks/arc084_a
 * Result: WA
 * Execution Time: 113 ms
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
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    rep(i,n) cin>>c[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    ll ans=0;

    rep(i,n){
        auto v1=lower_bound(a.begin(),a.end(),b[i]);
        auto v2=lower_bound(c.begin(),c.end(),b[i]);
        ll ind1=distance(a.begin(),v1);
        ll ind2=distance(v2,c.end());
        if(*v2==b[i]) ind2--;
       // cout<<ind1<<" "<<ind2<<endl;
        ans+=(ind1*ind2);
    }
    cout<<ans<<endl;
}