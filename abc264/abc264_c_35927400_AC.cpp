/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/35927400
 * Submitted at: 2022-10-23 16:06:13
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_c
 * Result: AC
 * Execution Time: 230 ms
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
      int h1,w1,h2,w2;
      cin>>h1>>w1;
      vector<vector<int>> a(h1+9,vector<int>(w1+9,0));
      rep(i,h1) rep(j,w1)cin>>a[i][j];
      cin>>h2>>w2;
      vector<vector<int>> b(h2+9,vector<int>(w2+9,0));
      rep(i,h2) rep(j,w2)cin>>b[i][j];

      rep(i,(1<<h1)){
        rep(j,(1<<w1)){
            vector<int> s,t;
            rep(k,h1) if(i&(1<<k)) s.push_back(k);
            rep(k,w1) if(j&(1<<k)) t.push_back(k);
            if(s.size()!=h2||t.size()!=w2) continue;

            bool f=true;
            rep(k,h2){
                rep(l,w2){
                    if(a[s[k]][t[l]]!=b[k][l]){
                        f=false;
                        break;
                    }
                }
            }
            if(f){
                cout<< "Yes" << endl;
                return 0;
            }
        }
      }
      cout<< "No" << endl;
      return 0;
    }