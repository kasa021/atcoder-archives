/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/36513699
 * Submitted at: 2022-11-15 08:59:00
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_d
 * Result: WA
 * Execution Time: 76 ms
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
      int n,m,ans=1;
      cin>>n>>m;
      if(n==m){
        cout<< "0" << endl;
        return 0;
      }
      vector<int> a(m+2),b;
      a[m]=n+1;
      a[m+1]=0;
      rep(i,m) cin>>a[i];
      sort(all(a));
      rep(i,m+2){
        if(a[i+1]-a[i]-1>0) b.push_back(a[i+1]-a[i]-1);
      }
    //   for(auto v:a) cout<< v << " ";
    //   cout<<endl;
    //   for(auto v:b) cout<< v << " ";
    //   cout<<endl;
    rep1(i,1,(int)b.size()){
        ans+=(b[i]+b[0]-1)/b[0];
    }
    cout<< ans << endl;
    }