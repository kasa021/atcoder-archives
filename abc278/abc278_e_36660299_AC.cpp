/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36660299
 * Submitted at: 2022-11-20 05:28:51
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_e
 * Result: AC
 * Execution Time: 527 ms
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
      int H,W,n,h,w;
      cin>>H>>W>>n>>h>>w;
      vector<vector<vector<int>>> a(H+9,vector<vector<int>>(W+9,vector<int>(n+1)));
      vector<int> cnt(n+1,0);
      rep1(i,1,H+1){
        rep1(j,1,W+1){
          int x;
          cin>>x;
          a[i][j][x]++;
          cnt[x]++;
        }
      }

      //二次元累積和
      rep(i,n+1){
        rep(j,H){
          rep(k,W+1){
            a[j+1][k][i]+=a[j][k][i];
          }
        }
        rep(j,W){
          rep(k,H+1){
            a[k][j+1][i]+=a[k][j][i];
          }
        }
      }

      
      rep(i,H-h+1){
        rep(j,W-w+1){
          vector<int> tmp(n+1);
          int ans=0;
          rep1(k,1,n+1){
            tmp[k]=a[h+i][w+j][k]-a[i][w+j][k]-a[h+i][j][k]+a[i][j][k];
            if(cnt[k]==tmp[k]){
              //cout<<"k"<< k << endl;
              ans++;
            }
          }
          cout<< n-ans << " ";
        }
        cout<<endl;
      }
      // rep(i,6){
      //   cout<< i << endl;
      //   rep(j,H+1){
      //     rep(k,W+1){
      //       cout<< a[j][k][i] << " ";
      //     }
      //     cout<<endl;
      //   }
      //   cout << endl;
      // }
    }