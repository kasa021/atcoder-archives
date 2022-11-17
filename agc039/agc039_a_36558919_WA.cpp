/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/36558919
 * Submitted at: 2022-11-17 14:20:42
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: WA
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
      ll k,ans=0,cnt=0;
      int indx=1,size=(int)s.size();
      cin>>k;
      char ch;
      if(s[0]==s[size-1]){
        ch=s[size-1];
        ans+=k-1;
        s[size-1]='0';
      }
      //cout<< ans << endl;
      rep(i,size-1){
        if(s[i]==s[indx]){
            while(indx<size&&s[i]==s[indx]){
                indx++;
            }
            cnt+=(indx-i)/2;
            i=indx-1;
        }
        //cout<<indx<<endl;
        indx++;
      }
      if(s[size-2]==ch) ans++;
      //cout<<cnt<<endl;
      ans+=k*cnt;
      cout<< ans << endl;

      //cout<<9*k<<endl;
    }