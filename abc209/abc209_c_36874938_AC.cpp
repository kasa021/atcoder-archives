/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/36874938
 * Submitted at: 2022-11-29 05:22:54
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_c
 * Result: AC
 * Execution Time: 77 ms
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
    int n; cin>>n;
    vector<int> a(n); 
    rep(i,n) cin>>a[i];
    ll ans=1;
    sort(all(a));
    rep(i,n){
        ans=ans*max(0,a[i]-i)%1000000007;
        //cout<< ans << endl;
    }
    cout<< ans << endl;

}
   
