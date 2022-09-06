/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/34653598
 * Submitted at: 2022-09-06 09:33:51
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_d
 * Result: AC
 * Execution Time: 290 ms
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

char g(char s,ll add){
    return char('A'+(s-'A'+add)%3);
}

char f(ll t,ll k,string &s){
    if(t==0) return s[k];
    if(k==0) return g(s[0],t);
    return g(f(t-1,k/2,s),k%2+1);
    }

int main(){
      string s;
      cin>>s;
      int q;
      cin>>q;
      
      while(q--){
        ll t,k;
        cin>>t>>k;
        cout<< f(t,k-1,s) << endl;
      }

      
    }