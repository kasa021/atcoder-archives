/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/gigacode-2019/submissions/36929283
 * Submitted at: 2022-12-02 12:01:41
 * Problem URL: https://atcoder.jp/contests/gigacode-2019/tasks/gigacode_2019_d
 * Result: AC
 * Execution Time: 259 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//using mint = modint1000000007;
int main(){
      ll h,w,s,v,total=0;
      ll ans=0;
      cin>>h>>w>>s>>v;
      vector<vector<ll>> a(h+9,vector<ll>(w+9,0));
      rep1(i,1,h+1){
        rep1(j,1,w+1){
            cin>>a[i][j];
        }
      }
      
      rep(i,h+4) rep(j,w+4) a[i][j+1]+=a[i][j];
      rep(i,w+4) rep(j,h+4) a[j+1][i]+=a[j][i];
    //   rep(i,h+1){
    //     rep(j,w+1) cout<< a[i][j] << " ";
    //     cout<<endl;
    //   }
      rep1(i,1,h+1){
        rep1(j,1,w+1){
            rep1(k,1,h+1){
                rep1(l,1,w+1){
                    if( i>k || j>l) continue;
                    total=a[k][l]-a[k][j-1]-a[i-1][l]+a[i-1][j-1]+(k-i+1)*(l-j+1)*s;
                    // cout<< i<<" "<<j<<" "<<k<<" "<<l << endl;
                    // cout<< total <<" "<<(k-i+1)*(l-j+1)<< endl;
                    if(total<=v ) ans=max(ans,(k-i+1)*(l-j+1));
                }
            }
        }
      }
      cout<< ans << endl;
    }