/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2010ho/submissions/36926747
 * Submitted at: 2022-12-02 08:53:12
 * Problem URL: https://atcoder.jp/contests/joi2010ho/tasks/joi2010ho_a
 * Result: AC
 * Execution Time: 46 ms
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
      int n,m;
      cin>>n>>m;
      vector<int> a(n);
      rep(i,n-1) cin>>a[i];
      vector<int> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
      //rep(i,n) cout<<csa[i]<<" ";
      //cout<<endl;
      int ans=0,now=0;
      rep(i,m){
        int s;
        cin>>s;
        //cout<< now+s<<" "<<now << endl;
        ans+=abs(csa[s+now]-csa[now]);
        //cout<< ans << endl;
        ans%=100000;
        now+=s;
      }
      cout<< ans << endl;
      
    }