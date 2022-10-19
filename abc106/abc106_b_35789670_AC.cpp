/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/35789670
 * Submitted at: 2022-10-19 12:02:22
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
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
      int n;
      cin>>n;
      
      vector<int> y(n+9,0);
      rep1(i,1,n+1){
        for(int j=1;j*j<=i;j++){
            if(i%j==0) {
                y[i]++;
                if(j*j!=i) y[i]++;
            }
            
        }
      }
      int ans=0;
      rep1(i,1,n+1){
        if(y[i]==8&&i%2==1){
            ans++;
            
        }
        //cout<< y[i] << endl;
      }
      cout<< ans << endl;
    }