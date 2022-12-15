/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/37278223
 * Submitted at: 2022-12-15 02:29:38
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_d
 * Result: AC
 * Execution Time: 72 ms
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
    ll n,m=0,ans=0,now=0;
    cin>>n;
    vector<ll> a(n+9),p(n+9),q(n+9);
    rep(i,n) cin>>a[i];
    p[0] = 0;
    for (int i = 0; i < n; i++)
        p[i + 1] = p[i] +a[i];
    q[0]=0;
    rep1(i,1,n+1){
        m=max(m,p[i]);
        q[i]=m;
    }

    rep1(i,1,n+1){
        ans=max(ans,now+q[i]);
        now+=p[i];
    }
    cout<< ans << endl;
}
   
