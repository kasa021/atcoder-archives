/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc130/submissions/34853483
 * Submitted at: 2022-09-14 10:28:27
 * Problem URL: https://atcoder.jp/contests/arc130/tasks/arc130_b
 * Result: RE
 * Execution Time: 592 ms
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
      int h,w,C,q;
      ll tate=0,yoko=0;
      cin>>h>>w>>C>>q;
      vector<bool> tatev(h,false),yokov(w,false);
      vector<int> t(q+10),n(q+10),c(q+10);
      vector<ll> ans(C+10,0);
      for(int i=0;i<q;i++) cin>>t[i]>>n[i]>>c[i];
      for(int i=q-1;i>=0;i--){
        if(t[i]==2){//縦
        if(!tatev[n[i]]){
        ans[c[i]]+=h;
        ans[c[i]]-=yoko;
        tate++;
        tatev[n[i]]=true;
        }
        }else {
        if(!yokov[n[i]]){
        ans[c[i]]+=w;
        ans[c[i]]-=tate;
        yoko++;
        yokov[n[i]]=true;
        }
      }
      }
      for(int i=1;i<=C;i++) cout<<ans[i]<< " ";
      cout<<endl;

    }