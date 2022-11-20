/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/36666908
 * Submitted at: 2022-11-20 09:54:09
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/arc077_a
 * Result: AC
 * Execution Time: 86 ms
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
      int n,now=0;
      cin>>n;
      vector<int> a(n),b;
      rep(i,n) cin>>a[i];
      deque<int> q;
      rep1(i,1,n+1){
        if(i%2==1){
            q.push_back(a[i-1]);
        }else {
            q.push_front(a[i-1]);
        }
      }
      rep(i,n){
        b.push_back(q.front());
        q.pop_front();
      }
      if(n%2==0)rep(i,n)cout<< b[i] << " ";
      else  for(int i=n-1;i>=0;i--) cout<< b[i] << " ";
      cout<<endl;
    }