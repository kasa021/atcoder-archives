/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/37074300
 * Submitted at: 2022-12-07 08:13:03
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_d
 * Result: AC
 * Execution Time: 69 ms
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
      deque<char> dq;
      rep(i,s.size()) dq.push_back(s[i]);
      int q,now=0,f;
      cin>>q;
      rep(i,q){
        int t;
        cin>>t;
        if(t==1) now++;
        else {
            int f;
            char c;
            cin>>f>>c;;
            if((now+f)%2==0) dq.push_back(c);
            else dq.push_front(c);
        }
      }
      char a;
      while(!dq.empty()){
        if(now%2==0){
            a=dq.front();
            dq.pop_front();
            cout<<a;
        }else{
            a=dq.back();
            dq.pop_back();
            cout<<a;
        }
      }cout<<endl;
    }
