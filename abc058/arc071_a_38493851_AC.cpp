/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc058/submissions/38493851
 * Submitted at: 2023-01-30 23:19:20
 * Problem URL: https://atcoder.jp/contests/abc058/tasks/arc071_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int n;
    cin>>n;
    vector<int> cnt(30,INT_MAX);
    rep(i,n){
        string s;
        cin>>s;
        vector<int> apha(30);
        rep(j,s.size()){
            apha[s[j]-'a']++;
        }
        rep(j,30) cnt[j]=min(cnt[j],apha[j]);
    }
    string ans="";
    rep(i,26) ans+=string(cnt[i],'a'+i);
    cout<< ans << endl;
    }
