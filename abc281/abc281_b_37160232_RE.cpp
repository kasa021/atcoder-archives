/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37160232
 * Submitted at: 2022-12-10 12:29:28
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_b
 * Result: RE
 * Execution Time: 104 ms
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
      string s,num="";
      ll n=0;
      cin>>s;
      bool f=false;
      char a=s[0],b=s[(int)s.size()-1];
      if(a>='A' && a<='Z' && b>='A' && b<='Z') f=true;
      else {
        cout<< "No" << endl;
        return 0;
      }
      for(int i=1;i<(int)s.size()-1;i++){
        if(s[i]>='A' && s[i]<='Z'){
            cout<< "No" << endl;
            return 0;
        }
        num+=s[i];
        
      }
      n=stol(num);
      //cout<< n << endl;
      //cout<< a<<" "<<b<<" "<<num << endl;
      if( n>=100000 && n<=999999) cout<< "Yes" << endl;
      else cout<<"No"<<endl;
    }

