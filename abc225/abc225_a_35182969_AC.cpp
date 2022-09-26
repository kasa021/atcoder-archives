/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/35182969
 * Submitted at: 2022-09-26 13:59:41
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_a
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
      string s;
      cin>>s;
      set<char> st;

      rep(i,3){
        st.insert(s[i]);
      }
      if((int)st.size()==3)cout<< "6" << endl;
      else if((int)st.size()==2) cout<< "3" << endl;
      else cout<< "1" << endl;
    }