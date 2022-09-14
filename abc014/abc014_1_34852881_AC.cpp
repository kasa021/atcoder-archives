/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/34852881
 * Submitted at: 2022-09-14 09:41:55
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_1
 * Result: AC
 * Execution Time: 6 ms
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
      if(a%b==0){
        cout<< "0" << endl;
      }else cout<< b-a%b << endl;
    }