/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/36667635
 * Submitted at: 2022-11-20 10:32:35
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_c
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
      ll n;
      cin>>n;
      string s;
      while(n){
        n--;
        s+='a'+n%26;
        n/=26;
      }
      reverse(all(s));
      cout<< s << endl;
      
    }