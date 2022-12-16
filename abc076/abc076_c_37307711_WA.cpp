/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc076/submissions/37307711
 * Submitted at: 2022-12-16 16:47:22
 * Problem URL: https://atcoder.jp/contests/abc076/tasks/abc076_c
 * Result: WA
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
      string s,t,ans="";
      int idx=-1;
      cin>>s>>t;
      rep(i,(int)s.size()){
        bool f=true;
        rep(j,(int)t.size()){
            if(j+i>=(int)s.size()){
                f=false;
                continue;
            }else {
                if(s[i+j]!='?' && s[i+j]!=t[j]) f=false;
            }
        }
        if(f){
            idx=i;
            //cout<< i << endl;
        }
      }
      if(idx==-1) cout<< "UNRESTORABLE" << endl;
      else {
        int now=0;
        while(now<idx){
            if(s[now]=='?'){
                ans+='a';
            }else ans+=s[now];
            now++;
        }
        ans+=t;
        cout<< ans << endl;
      }
    }
