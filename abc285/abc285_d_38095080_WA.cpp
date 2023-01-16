/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38095080
 * Submitted at: 2023-01-16 07:43:21
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_d
 * Result: WA
 * Execution Time: 242 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;

map<string,int> mp;
graph g(200009);
vector<bool> seen(200009,false),finished(200009,false);
int pos=-1;
void dfs(int v,int pre){
   seen[v]=true;
   for(auto nv:g[v]){
    if(nv==pre) continue;
    if(finished[nv]) continue;
    if(seen[nv] && !finished[nv]){
        pos=nv;
        return;
    }
    dfs(nv,v);
    if(pos!=-1) return;
   }
   finished[v]=true;
}
int main()
{
    int n,size=0;
    cin>>n;
    rep(i,n){
        string s,t;
        cin>>s>>t;
        if(mp.find(s) == mp.end())mp[s]=size++;
        if(mp.find(t) == mp.end())mp[t]=size++;
        g[mp[t]].push_back(mp[s]);
    }
    rep(i,size+1){
        if(seen[i]) continue;
        dfs(i,-1);
        if(pos!=-1) {
            cout<< "No" << endl;
            return 0;
        }
    }
    cout<< "Yes" << endl;

}
