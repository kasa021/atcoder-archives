/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/37011060
 * Submitted at: 2022-12-04 05:22:27
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_c
 * Result: AC
 * Execution Time: 22 ms
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
      int k;
      cin>>k;
      vector<int> a(k+9);
      a[1]=7%k;
      rep1(i,2,k+1) a[i]=(10*a[i-1]+7)%k;
      rep1(i,1,k+1){
        if(a[i]==0){
            cout<< i << endl;
            return 0;
        }
      }
       cout<< "-1" << endl;
    }
