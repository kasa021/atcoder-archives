/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35146365
 * Submitted at: 2022-09-24 17:40:53
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_b
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

int main(){
      int x,y,z;
      cin>>x>>y>>z;
      if(y<0){
        y*=-1;
        x*=-1;
        z*=-1;
      }
      if(x<y){
        cout<< abs(x) << endl;
      }else if(z>y){
        cout<< "-1" << endl;
      }else {
        cout<< abs(z)+abs(x-z) << endl;
      }

    }