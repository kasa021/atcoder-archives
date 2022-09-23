/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35066935
 * Submitted at: 2022-09-23 12:27:26
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ab
 * Result: AC
 * Execution Time: 175 ms
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
      int n,ans=0;
      cin>>n;
      vector<int> a(n);
      vector<char> t(n);
      rep(i,n) cin>>t[i]>>a[i];
      rep(i,n){
        if(t[i]=='+') ans=(ans+a[i])%10000;
        if(t[i]=='-') {
            ans=(ans-a[i])%10000;
            if(ans<0) ans+=10000;
        }
        if(t[i]=='*') ans=(ans*a[i])%10000;
        cout<< ans << endl;
      }
    }