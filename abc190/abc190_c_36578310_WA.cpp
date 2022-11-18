/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/36578310
 * Submitted at: 2022-11-18 16:14:50
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_c
 * Result: WA
 * Execution Time: 29 ms
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

int main(){
      int n,m,k,ans=0;
      cin>>n>>m;
      vector<int> a(m+9),b(m+9);
      rep(i,m)cin>>a[i]>>b[i];

      cin>>k;
      vector<int> c(k+9),d(k+9);
      rep(i,k) cin>>c[i]>>d[i];
      rep(i,(1<<k)){
        int cnt=0;
        vector<bool> now(16,false);
        rep(j,k){
            if(i & (1<<j)) now[c[j]]=true;
            else now[d[j]]=true;
        }
        rep(j,m){
            if(now[a[j]] && now[b[j]]) cnt++;
        }
        ans=max(ans,cnt);
      }
      cout<< ans << endl;
    }