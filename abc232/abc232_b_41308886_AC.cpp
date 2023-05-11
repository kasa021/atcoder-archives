/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/41308886
 * Submitted at: 2023-05-11 13:24:56
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_b
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
      string s,t;
      cin>>s>>t;
      int diff=0;
      if(s[0]<t[0]) diff=t[0]-s[0];
      else diff=t[0]-s[0]+26;
      rep(i,s.size()){
        if(s[i]<t[i]){
            if(diff!=(t[i]-s[i])){
                cout<< "No" << endl;
                return 0;
            }
        }else {
            if(diff!=t[i]-s[i]+26){
                cout<< "No" << endl;
                return 0;
            }
        }
      }
      cout<< "Yes" << endl;
    }
