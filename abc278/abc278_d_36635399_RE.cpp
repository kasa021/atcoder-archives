/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36635399
 * Submitted at: 2022-11-19 13:14:26
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_d
 * Result: RE
 * Execution Time: 2197 ms
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
      int n,cnt=0;
      cin>>n;
      ll now=0;
      vector<ll> a(n);
      vector<vector<ll>> b(200009,vector<ll>(n,0));
      rep(i,n) cin>>a[i];
      int q;
      cin>>q;
      rep(i,q){
        int t;
        
        cin>>t;
        if(t==1){
            ll p;
            cin>>p;
            cnt++;
            now=p;
        }else if(t==2){
            ll idx,p;
            cin>>idx>>p;
            b[cnt][idx-1]+=p;
        }else {
            int idx;
            cin>>idx;
            if(cnt==0) cout<< b[cnt][idx-1]+a[idx-1] << endl;
            if(cnt!=0) cout<< now+b[cnt][idx-1] << endl;
        }
      }
    //   rep(i,n) cout<< now+b[i] << " ";
    //   cout<<endl;
    //   for(auto v:b) cout<< v << " ";
    //   cout<<endl;
    }