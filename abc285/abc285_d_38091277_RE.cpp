/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38091277
 * Submitted at: 2023-01-16 04:51:09
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_d
 * Result: RE
 * Execution Time: 264 ms
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
using P = pair<string,string>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

graph g(100009);
vector<bool> seen(100009,false),finished(100009,false);
stack<int> st;
int pos=-1;
void dfs(int v,int p){
    seen[v]=true;
    st.push(v);
    for(auto nv: g[v]){
        if(nv==p) continue;
        if(finished[nv]) continue;
        if(seen[nv] && !finished[nv]){
            pos=nv;
            return;
        }
        dfs(nv,v);
        if(pos!=-1) return;
    }
    st.pop();
    finished[v]=true;
}


int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    int size=0;
    rep(i,n){
        string s,t;
        cin>>s>>t;
        if(mp.find(s)==mp.end()) mp[s]=size++;
        if(mp.find(t)==mp.end()) mp[t]=size++;
        g[mp[s]].push_back(mp[t]);
    } 
    for(auto [s,t]:mp){
        if(seen[t]) continue;
        dfs(t,-1);
    }
    if(pos==-1) cout<< "Yes" << endl;
    else cout<< "No" << endl;
    }
