/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/34346229
 * Submitted at: 2022-08-26 09:57:38
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_b
 * Result: AC
 * Execution Time: 88 ms
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
    int n,m;
    cin>>n>>m;
    graph g(n+1);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans=0,cnt=0;
    for(int i=1;i<=n;i++){
        for(auto v:g[i]){
            for(auto t:g[v]){
                for(auto s:g[t]){
                   if(i==s){
                    ans++;
                    //cout<<v<<" "<<t<<" "<<s<<endl;
                   }
                }
            }
        }
    }
    cout<<ans/6<<endl;
   
}