/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/35966987
 * Submitted at: 2022-10-25 16:04:24
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_d
 * Result: AC
 * Execution Time: 62 ms
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
      string s;
      cin>>n>>s;
      deque<int> a;
      a.push_back(n);
      for(int i=n-1;i>=0;i--){
        if(s[i]=='L') a.push_back(i);
        else a.push_front(i);
      }
      rep(i,n+1){
        cout<< a[i] << " ";
      }
      cout<<endl;
    }