/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc161/submissions/37922151
 * Submitted at: 2023-01-10 09:12:54
 * Problem URL: https://atcoder.jp/contests/abc161/tasks/abc161_d
 * Result: AC
 * Execution Time: 100 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

vector<ll> ans;
vector<int> num={-1,0,1};
void dfs(string s,int idx){
    if(idx==11){
        return;
    }else {
        if(idx==0){
            rep1(i,1,10) {
                char a='0'+i;
                ans.push_back(stol(s+a));
                dfs(s+a,idx+1);  
            }
        }else {
            rep(i,3){
                char a='0'+(s[idx-1]-'0'+num[i]);
                ans.push_back(stol(s+a));
                dfs(s+a,idx+1);
            }
        }
    }
}
int main(){
      int k;
      cin>>k;
      dfs("",0);
      sort(all(ans));
      ans.erase(unique(all(ans)),ans.end());
      cout<< ans[k-1] << endl;
      //rep(i,k)cout<< ans[i] << endl;
      //cout<< ans.size() << endl;
    }
