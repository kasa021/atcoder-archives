/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/37476771
 * Submitted at: 2022-12-24 09:52:06
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 231 ms
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
      int q;
      cin>>q;
      multiset<int> st;
      rep(i,q){
        int t,a,c;
        cin>>t;
        if(t==1){
            cin>>a;
            st.insert(a);
        }else if(t==2){
            cin>>a>>c;
            while(c-- && st.find(a)!= st.end()){
                st.erase(st.find(a));
            }
        }else {
            cout<< *st.rbegin()-*st.begin() << endl;
        }
      }
    }
