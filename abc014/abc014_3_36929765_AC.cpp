/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/36929765
 * Submitted at: 2022-12-02 12:31:24
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_3
 * Result: AC
 * Execution Time: 61 ms
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
//using mint = modint1000000007;
int main(){
      int n;
      cin>>n;
      vector<int> color(1000009,0);
      rep(i,n){
        int a,b;
        cin>>a>>b;
        color[a]++;
        color[b+1]--;;
      }
      //rep(i,8) cout<< color[i] << " ";
      rep1(i,1,1000004) color[i]+=color[i-1];
     //rep(i,8) cout<< color[i] << " ";
      //cout<<endl;
      int ans=0;
      rep(i,1000002){
        ans=max(ans,color[i]);
      }
      cout<< ans << endl;
    }