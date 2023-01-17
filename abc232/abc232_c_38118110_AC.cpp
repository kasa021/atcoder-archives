/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/38118110
 * Submitted at: 2023-01-17 10:26:26
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_c
 * Result: AC
 * Execution Time: 27 ms
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
      int n,m;
      cin>>n>>m;
      set<P> g;
      vector<P> h(m);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        h[i]=P(a,b);
      }
      rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g.insert(P(a,b));
      }
      vector<int> p(n);
      rep(i,n) p[i]=i;
      do{
        bool ans=true;
        rep(i,m){
            int s=h[i].first,t=h[i].second;
            if(!g.count(P(min(p[s],p[t]),max(p[s],p[t])))) ans=false;
        }
        if(ans){
            cout<< "Yes" << endl;
            return 0;
        }
        }while(next_permutation(all(p)));
        cout<< "No" << endl;
    }
