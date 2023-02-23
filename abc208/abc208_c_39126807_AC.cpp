/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/39126807
 * Submitted at: 2023-02-23 06:38:39
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_c
 * Result: AC
 * Execution Time: 403 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    rep(i,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(all(b));
    ll everyone=k/n;
    k-=n*everyone;
    rep(i,n){
        int c=lower_bound(all(b),a[i])-b.begin();
        if(c<k){
            cout<< everyone+1 << endl;
        }else cout<< everyone << endl;
    }

}