/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc153/submissions/38035359
 * Submitted at: 2023-01-15 07:58:48
 * Problem URL: https://atcoder.jp/contests/arc153/tasks/arc153_a
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
      int n,cnt=0;
      cin>>n;
      rep1(i,1,10){
        rep(j,10){
            rep(k,10){
                rep(l,10){
                    rep(p,10){
                        rep(q,10){
                            cnt++;
                            if(cnt==n){
                                int a=100000000*i+10000000*i+1000000*j+100000*k+10000*l+1000*l+100*p+10*q+p;
                                cout<< to_string(a) << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
      }
    }
