/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/34814971
 * Submitted at: 2022-09-12 07:17:59
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_c
 * Result: AC
 * Execution Time: 13 ms
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
ll n;
int dfs(string &s){
    ll ret=0;
    vector<char> lis={'3','5','7'};
    if((int)s.size()>0){
        if(stoll(s)>n){
            return ret;
        }else{
            bool ok =true;
            for(auto c:lis){
                if(s.find(c)==string::npos) ok=false;
            }
            if(ok) ret++;
        }
    }
    for(auto c:lis){
        s.push_back(c);
        ret+=dfs(s);
        s.pop_back();
    }
    return ret;
}
int main(){
      cin>>n;
      string s="";
      cout<<dfs(s)<<endl;
    }