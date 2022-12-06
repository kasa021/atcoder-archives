/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc068/submissions/37052338
 * Submitted at: 2022-12-06 04:12:07
 * Problem URL: https://atcoder.jp/contests/abc068/tasks/arc079_a
 * Result: TLE
 * Execution Time: 2258 ms
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
    graph g(n+9), g2(n+9);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    rep1(i,1,n+1){
        for(auto v:g[i]){
            for(auto nv:g[v]){
                g2[i].push_back(nv);
            }
        }
    }
    for(auto v:g2[1]){
        if(v==n){
            cout<<"POSSIBLE"<<endl;
            return 0;
        }
    }
cout<<"IMPOSSIBLE"<<endl;
}
   
