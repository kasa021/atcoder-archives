/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc081/submissions/36770973
 * Submitted at: 2022-11-25 09:04:01
 * Problem URL: https://atcoder.jp/contests/abc081/tasks/arc086_a
 * Result: TLE
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

int main(){
      int n,k,ans=0;
      cin>>n>>k;
      vector<int> a(n);
      set<int> st;
      map<int,int> mp;
      rep(i,n) cin>>a[i];
      rep(i,n){
        st.insert(a[i]);
        mp[a[i]]++;
      }
      while((int)st.size()>k){
        int idx=0,m=2000000;
        for(auto [i,v]:mp){
            if(m>v){
                m=v;
                idx=i;
            }
        }
        ans+=m;
        mp[idx]=INT_MAX;
        st.erase(idx);
      }
      cout<< ans << endl;
    }