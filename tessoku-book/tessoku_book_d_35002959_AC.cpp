/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35002959
 * Submitted at: 2022-09-19 17:41:41
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d
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
      string s;
      rep(i,10){
        s+=(n%2)+'0';
        n/=2;
      }
      //cout<< "aa" << endl;
      reverse(s.begin(),s.end());
      cout<< s << endl;
      
    }