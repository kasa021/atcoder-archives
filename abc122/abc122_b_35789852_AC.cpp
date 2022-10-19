/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc122/submissions/35789852
 * Submitted at: 2022-10-19 12:10:17
 * Problem URL: https://atcoder.jp/contests/abc122/tasks/abc122_b
 * Result: AC
 * Execution Time: 6 ms
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
      int ans=0;
      rep(i,(int)s.size()){
        int j=0;
        while(true){
            if(s[i+j]=='A'||s[i+j]=='T'||s[i+j]=='C'||s[i+j]=='G'){
                j++;
            }else break;
        }
        ans=max(ans,j);
      }
      cout<< ans << endl;
    }