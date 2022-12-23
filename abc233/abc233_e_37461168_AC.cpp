/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/37461168
 * Submitted at: 2022-12-23 12:42:07
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_e
 * Result: AC
 * Execution Time: 25 ms
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
   string ans;
   int w=0;
   rep(i,s.size())w+=s[i]-'0';

   int x=0;
   for(int i=s.size()-1;i>=0;i--){
      x+=w;
      w-=s[i]-'0';
      ans+='0'+(x%10);
      x/=10;
   }
   while(x){
      ans+='0'+(x%10);
      x/=10;
   }
   reverse(all(ans));
   cout<< ans << endl;
}
