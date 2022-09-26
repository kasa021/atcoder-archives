/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/35177993
 * Submitted at: 2022-09-26 09:47:12
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_c
 * Result: WA
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

ll ans=0;
int n,b;
vector<int> t(200009),k(200009);
vector<vector<int>> a(200009);

ll dfs(int n){
    ans+=t[n-1];
    for(auto v:a[n-1]){
        if(v==0) continue;
        dfs(v);
    }
    return ans;
}

int main(){
      
      cin>>n;
      
      rep(i,n){
        cin>>t[i]>>k[i];
        rep(j,k[i]){
            cin>>b;
            a[i].push_back(b);
        }
      }

      //ll ans=0;
      //dfs(n);
      cout<<dfs(n)<<endl;
    }