/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39694016
 * Submitted at: 2023-03-13 03:50:50
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_c
 * Result: WA
 * Execution Time: 128 ms
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
    string t;
    cin>>t;
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];
    map<char,int> mp;
    map<int, string> q; 
    rep(i,26){
        mp[t[i]]=i+1;
    }
    vector<string> ans;
    rep(i,n){
        int r=1,now=0;
        for(int j=s[i].size()-1;j>=0;j--){
            now+=mp[s[i][j]]*r;
            r*=26;
        }
        q[now]=s[i];
    }
    for(auto [v,e]:q)cout<< e << endl;



}