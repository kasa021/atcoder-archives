/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc181/submissions/37012457
 * Submitted at: 2022-12-04 06:26:55
 * Problem URL: https://atcoder.jp/contests/abc181/tasks/abc181_d
 * Result: WA
 * Execution Time: 15 ms
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
      vector<int> dic,num(10,0);
      rep(i,(int)s.size()){
        num[s[i]-'0']++;
      }
      int now=8;
      while(now<1000){
        dic.push_back(now);
        now+=8;
      }
    //   for(auto v:dic) cout<< v << " ";
    //   cout<<endl;
    bool f=true;
      for(int i=(int)dic.size()-1;i>=0;i--){
        f=true;
        vector<int> num2(10,0);
        int x=dic[i];
        while(x>0){
            num2[x%10]++;
            x/=10;
        }
        rep(j,10){
            if(num[j]<num2[j]) f=false; 
            //if(i==0)cout<< num[j]<<" "<<num2[j] << endl;
        }
        if(f){
            cout<< "Yes" << endl;
            return 0;
        }
      }
      cout<< "No" << endl;
    }
