/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc012/submissions/41305069
 * Submitted at: 2023-05-11 10:09:25
 * Problem URL: https://atcoder.jp/contests/abc012/tasks/abc012_3
 * Result: AC
 * Execution Time: 9 ms
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
      int sum=0;
      rep1(i,1,10){
        rep1(j,1,10) sum+=i*j;
      }
      int n;
      cin>>n;
      int diff=sum-n;
      rep1(i,1,10){
        if(diff%i==0 && i<10 && diff/i<10){
            cout<< i<<" x "<<diff/i << endl;
        }
      }
    }
    