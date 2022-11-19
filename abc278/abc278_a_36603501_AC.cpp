/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36603501
 * Submitted at: 2022-11-19 12:06:00
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_a
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
      int n,k;
      cin>>n>>k;
      deque<int> q;
      rep(i,n){
        int a;
        cin>>a;
        q.push_back(a);
      }
      rep(i,k){
        q.pop_front();
        q.push_back(0);
      }
      while(!q.empty()){
        cout<< q.front() << endl;
        q.pop_front();
      }
    }