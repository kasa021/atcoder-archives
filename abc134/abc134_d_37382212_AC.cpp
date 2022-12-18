/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/37382212
 * Submitted at: 2022-12-18 15:31:36
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_d
 * Result: AC
 * Execution Time: 381 ms
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

vector<int> enum_div(int n){
    vector<int> res;
res.push_back(1);
res.push_back(n);
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(i);
            if(i*i != n){
                res.push_back(n/i);
           }
       }
   }
return res;
}

int main(){
      int n;
      cin>>n;
      vector<int> a(n+1),ball(n+1),sum(n+1),ans;
      rep1(i,1,n+1) cin>>a[i];
      map<int,vector<int>> mp;
      for(int i=n;i>=1;i--){
        if(sum[i]%2!=a[i]){
            ball[i]++;
            mp[i]=enum_div(i);
            for(auto v:mp[i]){
                sum[v]++;
            }
        }
      }
      rep1(i,1,n+1){
        if(ball[i]>0) ans.push_back(i);
      }
      cout<< ans.size() << endl;
      for(auto v:ans)cout<<v<<endl;
    }
