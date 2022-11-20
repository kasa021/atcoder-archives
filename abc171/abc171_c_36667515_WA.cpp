/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/36667515
 * Submitted at: 2022-11-20 10:25:15
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_c
 * Result: WA
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
      //n--;
      string s;
      while(n>=26){
        //cout<< n << endl;
        s+='a'+n%26-1;
        //cout<< s << endl;
        n/=26;
      }
      n--;
      s+='a'+n;
      
      reverse(all(s));
      cout<< s << endl;
      
    }