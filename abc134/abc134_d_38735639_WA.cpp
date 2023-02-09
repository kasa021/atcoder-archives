/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/38735639
 * Submitted at: 2023-02-09 11:02:36
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_d
 * Result: WA
 * Execution Time: 166 ms
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
      vector<int> a(n),cnt(n),ans;
      rep(i,n) cin>>a[i];
      for(int i=n-1;i>=0;i--){
        if((a[i]==1&&cnt[i]%2==0) || (a[i]==0&&cnt[i]%2==1)){
            if(cnt[i]%2==0){
                cnt[i]++;
                ans.push_back(i);
                vector<int> res=enum_div(i+1);
                for(auto v:res){
                    cnt[v-1]++;
                }
            }
        }
      }
      cout<< ans.size() << endl;
      for(auto v:ans) cout<<v+1<<" ";
      cout<<endl;
    }
