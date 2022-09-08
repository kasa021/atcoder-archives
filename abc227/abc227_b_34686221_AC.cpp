/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/34686221
 * Submitted at: 2022-09-08 06:14:12
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_b
 * Result: AC
 * Execution Time: 13 ms
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
      int a[n];
      rep(i,n) cin>>a[i];
      vector<bool> b(n,false);
      int cnt=0;
      rep1(i,1,200){
        rep1(j,i,200){
            rep1(k,0,n){
                int x=4*i*j+3*i+3*j;
                if(x==a[k]&&b[k]==false) {
                    cnt++;
                    b[k]=true;
                    //cout<<x<<endl;
                    }
            }
        }
      }
      cout<<n-cnt<<endl;
    }

