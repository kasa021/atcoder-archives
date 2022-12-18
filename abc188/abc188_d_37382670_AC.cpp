/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/37382670
 * Submitted at: 2022-12-18 16:21:14
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_d
 * Result: AC
 * Execution Time: 575 ms
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
//typedef modint1000000007 mint;
int main(){
      ll n,m,M=0,sum=0;
      cin>>n>>m;
      vector<ll> a(n),b(n),c(n),dot;
      map<ll,ll> date;
      rep(i,n) {
        cin>>a[i]>>b[i]>>c[i];
        dot.push_back(a[i]);
        dot.push_back(b[i]+1);
        date[a[i]]+=c[i];
        date[b[i]+1]-=c[i];
      }
      sort(all(dot));
      dot.erase(unique(all(dot)),dot.end());
      //for(auto v:dot) cout<< v << endl;
      rep1(i,1,(int)dot.size()){
        date[dot[i]]+=date[dot[i-1]];
        //cout<< date[dot[i-1]] << endl;
      }
      //cout<<date[dot[(int)dot.size()-1]]<<endl;
      rep(i,(int)dot.size()-1){
        ll now=date[dot[i]]*(dot[i+1]-dot[i]);
        if(date[dot[i]]<m) sum+=now;
        else sum+=m*(dot[i+1]-dot[i]);
      }
      cout<< sum << endl;
     

    }
