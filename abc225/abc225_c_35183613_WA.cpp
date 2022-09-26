/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/35183613
 * Submitted at: 2022-09-26 14:27:22
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_c
 * Result: WA
 * Execution Time: 34 ms
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
      int n,m;
      cin>>n>>m;
      bool f=true;
      vector<vector<int>> b(n+9,vector<int> (m+9));
      rep1(i,1,n+1){
        rep1(j,1,m+1){
            cin>>b[i][j];
        }
      }
      int s1=b[2][1]-b[1][1];
      int s2=b[1][1]-(s1-1)*7;
      int t2=s2;
      //cout<< s1<<" "<<s2 << endl;
      rep1(i,1,n+1){
        s2=t2;
        rep1(j,1,m+1){
            int cnt=(s1-1)*7+s2;
            if(cnt!=b[i][j]){
                f=false;
                break;
            }
            s2++;
        }
        s1++;
      }
      cout << (f ? "Yes" : "No") << endl;
    }