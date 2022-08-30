/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/34453218
 * Submitted at: 2022-08-30 03:34:21
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_b
 * Result: AC
 * Execution Time: 4 ms
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
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    vector<int> b(n);
    rep(i,n) b[i]=i+1;
    sort(a.begin(),a.end());
    if(a==b) cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
   