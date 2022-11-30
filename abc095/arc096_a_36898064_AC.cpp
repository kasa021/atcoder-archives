/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/36898064
 * Submitted at: 2022-11-30 12:15:24
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/arc096_a
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
      int a,b,c,x,y,ans=0;
      cin>>a>>b>>c>>x>>y;
      while(x>0 && y>0){
        if(2*c<=a+b){
            ans+=2*c;
            x--;
            y--;
        }else {
            ans+=(a+b);
            x--;
            y--;
        }
      }
      //cout<< x<<" "<<y<<" "<<ans << endl;
      if(x>0 && y==0){
        rep(i,x){
            if(2*c>a){
                
                ans+=a;
            }else{
                ans+=2*c;
            }
        }
        // cout<< "1" << endl;
        // cout<< x<<" "<<y<<" "<<ans << endl;
      }else if(x==0 && y>0){
        rep(i,y){
            if(2*c>b){
                ans+=b;
            }else {
                ans+=2*c;
            }
        }
        // cout<< "2" << endl;
        // cout<< x<<" "<<y<<" "<<ans << endl;
      }
      cout<< ans << endl;
    }
