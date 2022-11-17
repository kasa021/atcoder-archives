/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc043/submissions/36554580
 * Submitted at: 2022-11-17 11:06:08
 * Problem URL: https://atcoder.jp/contests/abc043/tasks/abc043_b
 * Result: AC
 * Execution Time: 7 ms
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
      string s,ans;
      int b=0;
      cin>>s;
      reverse(all(s));
      rep(i,(int)s.size()){
        if(s[i]!='B'){
            if(b==0){
                ans+=s[i];
            }else b--;
        }else b++;
      }
      reverse(all(ans));
      cout<< ans << endl;
    }