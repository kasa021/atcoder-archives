/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc096/submissions/36769896
 * Submitted at: 2022-11-25 08:06:42
 * Problem URL: https://atcoder.jp/contests/abc096/tasks/abc096_c
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
      int h,w;
      cin>>h>>w;
      vector<string> s(h);
      vector<int> mx = {1,0,-1,0};
      vector<int> my = {0,1,0,-1};
      rep(i,h) cin>>s[i];
      rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'){
                bool f=false;
                rep(k,4){
                    int nx,ny;
                    nx=i+mx[k];
                    ny=j+my[k];
                    if(nx<0||nx>=h||ny<0||ny>=w) continue;
                    if(s[nx][ny]=='#') f=true;
                }
                if(!f){
                    cout<< "No" << endl;
                    return 0;
                }
            }
        }
      }
      cout<< "Yes" << endl;
    }