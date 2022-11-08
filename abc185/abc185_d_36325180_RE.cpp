/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/36325180
 * Submitted at: 2022-11-08 11:48:44
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_d
 * Result: RE
 * Execution Time: 189 ms
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
      int n,m,ans=0;
      cin>>n>>m;
      if(m==0){
        cout<< "1" << endl;
        return 0;
      }else if(m==n){
        cout<< "0" << endl;
        return 0;
      }
      vector<int> a(m);
      rep(i,m) cin>>a[i];
      sort(all(a));
      if(a[m-1]!=n) a.push_back(n+1);
      if(a[0]!=1) a.push_back(0);
      sort(all(a));
      vector<int> b((int)a.size()-1);
      rep(i,(int)a.size()-1){
        if(a[i+1]-a[i]-1!=0)
        b[i]=a[i+1]-a[i]-1; 
      }

    //   for(auto v:b) cout<<v<<" ";
    //   cout<<endl;
      sort(all(b));
      for(auto v:b){
        ans+=(v+b[0]-1)/b[0];
      }
      cout<< ans << endl;
    }