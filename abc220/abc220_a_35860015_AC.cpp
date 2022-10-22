/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/35860015
 * Submitted at: 2022-10-22 10:56:26
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_a
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
      int a,b,c,ans=0,cnt=1;
      cin>>a>>b>>c;
      while(true){
        ans=c*cnt;
        if(a<=ans&&ans<=b){
            cout<< ans << endl;
            return 0;
        }else if(b<ans){
            cout<< "-1" << endl;
            return 0;
        }
        cnt++;
      }
    }