/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36476049
 * Submitted at: 2022-11-13 12:00:09
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_a
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
      int n,a;
      cin>>n>>a;
      rep(i,n){
        int b;
        cin>>b;
        if(b==a) {
            cout<< i+1 << endl;
            return 0;
        }
      }
      
    }