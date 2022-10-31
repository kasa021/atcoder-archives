/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/36120615
 * Submitted at: 2022-10-31 13:08:00
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_e
 * Result: AC
 * Execution Time: 1838 ms
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
      int n,m,ans=INT_MAX;
      cin>>n>>m;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      set<int> st;
      vector<int> cnt(n);
      rep(i,n+9){
        st.insert(i);
      }
      
      rep(i,m){
            st.erase(a[i]);
            cnt[a[i]]++;
        //cout<< a[i] << endl;
      }
      //cout<< cnt[0] << endl;
      rep(i,n-m+1){
        int idx=m+i;
        int  itr=*begin(st);
        //cout<< itr << endl;
        ans=min(ans,itr);
        if(cnt[a[i]]==1) st.insert(a[i]);
          cnt[a[i]]--;
          st.erase(a[idx]);
          cnt[a[idx]]++;  
      }
      cout<< ans << endl;
    }