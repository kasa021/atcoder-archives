/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/35769131
 * Submitted at: 2022-10-18 09:53:45
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_c
 * Result: AC
 * Execution Time: 341 ms
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
    vector<int> a(n+9);
    rep(i,n)cin>>a[i];
    vector<int> maximum1(n+9,0),maximum2(n+9,0);
    rep1(i,1,n){
        maximum1[i]=max(maximum1[i-1],a[i-1]);
    }
    rep1(i,1,n){
        maximum2[i]=max(maximum2[i-1],a[n-i]);
    }
    rep(i,n){
        int m;
        m=max(maximum1[i],maximum2[n-i-1]);
        cout<< m << endl;
    }
}