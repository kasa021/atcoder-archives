/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/35811723
 * Submitted at: 2022-10-20 13:37:15
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_c
 * Result: AC
 * Execution Time: 8 ms
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
      vector<vector<int>> s(m+9);
      vector<int> p(m+9),light(m+9,0);
      rep(i,m){
        int k;
        cin>>k;
        rep(j,k){
            int c;
            cin>>c;
            c--;
            s[i].push_back(c);
        }
      }
      rep(i,m) cin>>p[i];


    
     rep(i,1<<n){//2^n通り調べる
        bool f=true;
        vector<int> light(m+9,0);
        rep(j,n){//スイッチjがonかどうか
            if(i&(1<<j)){
                rep(l,m){
                    for(auto v:s[l]){
                        if(v==j) light[l]++;
                    }
                }
            }
        }
        rep(j,m){
            if(light[j]%2!=p[j]) {
                f=false;
                break;
            }
            //cout<< light[j] << endl;
        }
        if(f) ans++;
     }
     cout<< ans << endl;
    }