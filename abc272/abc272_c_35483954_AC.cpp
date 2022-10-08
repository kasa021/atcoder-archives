/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35483954
 * Submitted at: 2022-10-08 12:25:03
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_c
 * Result: AC
 * Execution Time: 70 ms
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
      int n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll guf=-1ll,gus=-1ll,kif=-2ll,kis=-2ll;
      rep(i,n){
        if(a[i]%2==0){
            if(guf<a[i]){
                gus=guf;
                guf=a[i];
            }else if(gus<a[i]){
                gus=a[i];
            }
        }else {
            if(kif<a[i]){
                kis=kif;
                kif=a[i];
            }else if(kis<a[i]){
                kis=a[i];
            }
        }
      }

      ll max1=guf+gus,max2=kif+kis;
      if(max1%2==0&&max2%2==0){
        ll ans=max(max1,max2);
        cout<< ans << endl;
      }else if(max1%2==0&&max2%2==1){
        cout<< max1 << endl;
      }else if(max1%2==1&&max2%2==0){
        cout<< max2 << endl;
      }else cout<< "-1" << endl;
    }