/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36624456
 * Submitted at: 2022-11-19 12:43:08
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_c
 * Result: AC
 * Execution Time: 389 ms
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
using graph=vector<vector<P>>;

int main(){
      int n,q;
      cin>>n>>q;
      map<int,set<int>> mp;
      rep(i,q){
        int a,b,t;
        cin>>t>>a>>b;
        if(t==1){
            mp[a].insert(b);
        }else if(t==2){
            mp[a].erase(b);
        }else {
            //cout<< "ans" << endl;
            if(mp[a].count(b) && mp[b].count(a)){
                cout<< "Yes" << endl;
            }else cout<< "No" << endl;
        }
      }
    }