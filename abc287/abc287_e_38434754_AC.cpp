/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/38434754
 * Submitted at: 2023-01-28 21:06:30
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_e
 * Result: AC
 * Execution Time: 784 ms
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

void dfs(vector<int>& group,vector<string>& s,vector<int>& ans,int idx){
    vector<vector<int>> nxt(26,vector<int>(0));
    if(group.size()==1) return;
    for(int i: group){
        ans[i]=max(ans[i],idx);
        if(idx==s[i].size()) continue;
        nxt[s[i][idx]-'a'].push_back(i);
    }
    rep(i,26){
        if(nxt[i].size()==0) continue;
        dfs(nxt[i],s,ans,idx+1);
    }
}



int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    vector<int> ans(n,0);
    vector<vector<int>> groups(26,vector<int> (0));
    rep(i,n) groups[s[i][0]-'a'].push_back(i);
    rep(i,26){
        if(groups[i].size()==0) continue;
        dfs(groups[i],s,ans,0);
    }
    rep(i,n) cout<< ans[i] << endl;
    }
