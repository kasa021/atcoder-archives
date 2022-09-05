/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/34634696
 * Submitted at: 2022-09-05 09:36:29
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_b
 * Result: AC
 * Execution Time: 10 ms
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
using P = pair<string,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n;
      cin>>n;
      map<string,int> mp;
      string as;
  int ans=0;
      rep(i,n){
        string s;
        cin>>s;
        mp[s]++;
        if(ans<mp[s]){
            ans=mp[s];
            as=s;
        }
      }
      cout<<as<<endl;
    }