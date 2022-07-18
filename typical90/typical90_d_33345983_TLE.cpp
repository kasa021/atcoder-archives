/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/33345983
 * Submitted at: 2022-07-18 13:20:36
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: TLE
 * Execution Time: 5514 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph=vector<vector<int>>;

int main(){
      int h,w;
      cin>>h>>w;
      int a[h+1][w+1];
      rep(i,h){
        rep(j,w){
            cin>>a[i][j];
        }
      }
      int b[h+1][w+1]={0};
      rep(i,h){
        rep(j,w){
            rep(k,w){
                b[i][j]+=a[i][k];
            }
            rep(l,h){
                b[i][j]+=a[l][j];
            }
            b[i][j]-=a[i][j];
        }
      }

      rep(i,h){
        rep(j,w){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
      }
      return 0;
    }