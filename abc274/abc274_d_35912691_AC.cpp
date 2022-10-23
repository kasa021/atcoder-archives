/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35912691
 * Submitted at: 2022-10-23 04:22:12
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_d
 * Result: AC
 * Execution Time: 39 ms
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
      int n,x,y;
      cin>>n>>x>>y;
      vector<int> a(n+9),odd,even;
      rep1(i,1,n+1) cin>>a[i];
      rep1(i,2,n+1){
        if(i%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
      }
      vector<vector<bool>> xdp(odd.size()+1,vector<bool>(2e4+10,false)),ydp(even.size()+1,vector<bool>(2e4+10));
      xdp[0][1e4+a[1]]=true;
      ydp[0][1e4]=true;

      rep(i,(int)odd.size()){
        rep(j,2e4){
            if(xdp[i][j]){
                xdp[i+1][j+odd[i]]=true;
                xdp[i+1][j-odd[i]]=true;
            }
        }
      }
      rep(i,(int)even.size()){
        rep(j,2e4){
            if(ydp[i][j]){
                ydp[i+1][j+even[i]]=true;
                ydp[i+1][j-even[i]]=true;
            }
        }
      }
      if(xdp[odd.size()][x+1e4]&&ydp[even.size()][y+1e4]) cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }
