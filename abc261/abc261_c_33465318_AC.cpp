/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33465318
 * Submitted at: 2022-07-23 12:59:34
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_c
 * Result: AC
 * Execution Time: 481 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n;
      cin>>n;
      vector<string> s(n);
      rep(i,n) cin>>s[i];
      set<string> p;
      map<string,int> mp;
      int size=p.size();
      rep(i,n){
        size=p.size();
        p.insert(s[i]);
        mp[s[i]]++;
        if(size==p.size()){
            cout<<s[i]<<'('<<mp[s[i]]-1<<')'<<endl;
        }else {
            cout<<s[i]<<endl;
        }
        
      }
    }