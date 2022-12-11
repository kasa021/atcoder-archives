/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc047/submissions/37216099
 * Submitted at: 2022-12-11 10:48:40
 * Problem URL: https://atcoder.jp/contests/abc047/tasks/abc047_b
 * Result: AC
 * Execution Time: 7 ms
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
      int w,h,n;
      cin>>w>>h>>n;
      vector<vector<int>> mp(h+9,vector<int>(w+9,0));
      rep(i,n){
        int x,y,a;
        cin>>x>>y>>a;
        if(a==1){
            rep(i,h){
                rep(j,x) mp[i][j]++;
            }
        }else if(a==2){
            rep(i,h){
                rep1(j,x,w){
                    mp[i][j]++;
                }
            }
        }else if(a==3){
            rep(i,y){
                rep(j,w){
                    mp[i][j]++;
                }
            }
        }else if(a==4){
            rep1(i,y,h){
                rep(j,w){
                    mp[i][j]++;
                }
            }
        }
      }
      int ans=0;
      rep(i,h){
        rep(j,w){
            if(mp[i][j]==0) ans++;
            //cout<< mp[i][j]<<" ";
        }
      }
      cout<< ans << endl;
    }
