/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/37457046
 * Submitted at: 2022-12-23 08:11:01
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_e
 * Result: TLE
 * Execution Time: 2205 ms
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
      string x;
      cin>>x;
      string ans;
      ans="0"+x;
      //cout<<  ans<< endl;
      int keta=(int)x.size()-1;
      //cout<< keta << endl;
      for(int i=1;i<(int)x.size();i++){//(int)x.size()-1回足す
      int up=0,now=0;
      keta=(int)x.size();
         for(int j=(int)x.size()-i-1;j>=0;j--){
             now=(ans[keta]-'0')+(x[j]-'0')+up;
           // cout<< now<<" now" << endl;
            up=now/10;
            now%=10;
            ans[keta]=now+'0';
            keta--;
            //cout<< ans << endl;
         }
         //cout<< "keta"<<keta << endl;
         while(up){
            now=(ans[keta]-'0')+up;
            up=now/10;
            now%=10;
            //cout<< now<<" now" << endl;
            ans[keta]=now+'0';
            keta--;
         }
      }
      if(ans[0]=='0'){
        ans=ans.substr(1,(int)ans.size()-1);
      }
      cout<< ans << endl;
    }
