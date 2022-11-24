/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc017/submissions/36761684
 * Submitted at: 2022-11-24 16:42:36
 * Problem URL: https://atcoder.jp/contests/abc017/tasks/abc017_2
 * Result: AC
 * Execution Time: 8 ms
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
      string s;
      cin>>s;
      int i=0,size=s.size();
      bool f=true;
      while(i<size){
        if(s[i]=='o'||s[i]=='k'||s[i]=='u') i++;
        else if(s[i]=='c'){
            if(i==size-1){
                f=false;
                break;
            }else if(s[i+1]=='h')i+=2;
            else {
                f=false;
                break;
            }
        }else {
                f=false;
                break;
            }
      }
      if(f) cout<< "YES" << endl;
      else cout<< "NO" << endl;
    }