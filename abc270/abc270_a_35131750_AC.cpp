/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35131750
 * Submitted at: 2022-09-24 13:25:36
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_a
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
      int a,b;
      cin>>a>>b;
      vector<bool> ans(8,false);
      if(a==1){
        ans[1]=true;
      }
      if(a==2) ans[2]=true;
      if(a==3) {
        ans[1]=true;
        ans[2]=true;
    }
    if(a==4) ans[4]=true;
    if(a==5) {ans[1]=true; ans[4]=true;}
    if(a==6) {ans[2]=true; ans[4]=true;}
    if(a==7) { ans[2]=true; ans[4]=true; ans[1]=true;}

    if(b==1){
        ans[1]=true;
      }
      if(b==2) ans[2]=true;
      if(b==3) {
        ans[1]=true;
        ans[2]=true;
    }
    if(b==4) ans[4]=true;
    if(b==5) {ans[1]=true; ans[4]=true;}
    if(b==6) {ans[2]=true; ans[4]=true;}
    if(b==7) { ans[2]=true; ans[4]=true; ans[1]=true;}
int s=0;
    if(ans[1]) s+=1;
    if(ans[2]) s+=2;
    if(ans[4]) s+=4;
    cout<< s << endl;
    }