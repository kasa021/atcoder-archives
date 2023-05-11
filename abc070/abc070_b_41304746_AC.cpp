/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/41304746
 * Submitted at: 2023-05-11 09:48:22
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_b
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
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      vector<int> time(300,0);
      rep1(i,a,b) time[i]++;
      rep1(i,c,d) time[i]++;
      int ans=0;
      rep(i,300) if(time[i]==2) ans++;
      cout<< ans << endl;
    }