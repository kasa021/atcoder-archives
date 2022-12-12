/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/37237965
 * Submitted at: 2022-12-12 14:18:30
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: AC
 * Execution Time: 172 ms
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
      int n,q,now=0;
      string s;
      cin>>n>>s>>q;
      rep(i,q){
        int t,a,b;
        cin>>t>>a>>b;
        a--;b--;
        if(t==1){
            if(now%2==0){
                swap(s[a],s[b]);
            }else {
                if(b<n){
                    swap(s[a+n],s[b+n]);
                }else if(a>=n){
                    swap(s[a-n],s[b-n]);
                }else {
                    swap(s[a+n],s[b-n]);
                }
            }
        }else {
            now++;
        }
      }

      if(now%2==0){
        cout<< s << endl;
      }else {
        rep1(i,n,2*n)cout<< s[i];
        rep(i,n) cout<<s[i];
        cout<<endl;
      }
    }
