/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc073/submissions/36167545
 * Submitted at: 2022-11-03 02:30:24
 * Problem URL: https://atcoder.jp/contests/abc073/tasks/abc073_c
 * Result: AC
 * Execution Time: 67 ms
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
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    map<int,int> mp;
    rep(i,n){
        mp[a[i]]++;
    }
    for(auto v:mp){
        if(v.second%2==1)ans++;
    }
    cout<< ans << endl;
}