/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc057/submissions/36761849
 * Submitted at: 2022-11-24 17:00:21
 * Problem URL: https://atcoder.jp/contests/arc057/tasks/arc057_a
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
      ll now,k,day=0;
      cin>>now>>k;
      if(k==0){
        cout<< 2*1000000000000-now << endl;
        return 0;
      }
      while(now<2*1000000000000){
        now+=1ll+k*now;
        day++;
        //cout<< now<<" "<<day << endl;
      }
      cout<< day << endl;
    }