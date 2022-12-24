/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37504612
 * Submitted at: 2022-12-24 12:31:48
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_d
 * Result: AC
 * Execution Time: 20 ms
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
//typedef modint1000000007 mint;
int main(){
      string s;
      cin>>s;
      stack<int> left;
      vector<int> mp(30,-1);
      rep(i,(int)s.size()){
        if(s[i]=='('){
            left.push(i);
        }else if(s[i]==')'){
            int j=left.top();
            left.pop();
            rep(k,30){
                if(mp[k]>=j && mp[k]<=i) mp[k]=-1;
            }
        }else {
            if(mp[s[i]-'a']!=-1){
                cout<< "No" << endl;
                return 0;
            }else {
                mp[s[i]-'a']=i;
            }
        }
      }
      cout<< "Yes" << endl;
    }
