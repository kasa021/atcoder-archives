/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc003/submissions/41305353
 * Submitted at: 2023-05-11 10:26:14
 * Problem URL: https://atcoder.jp/contests/abc003/tasks/abc003_2
 * Result: AC
 * Execution Time: 7 ms
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
      string s,t,a="atcoder";
      set<char> st;
      rep(i,a.size()) st.insert(a[i]);
      cin>>s>>t;
      rep(i,s.size()){
        if(s[i]!=t[i]){
            if(s[i]=='@' && t[i]!='@'){
                if(!st.count(t[i])){
                    cout<< "You will lose" << endl;
                    return 0;
                }
            }else if(s[i]!='@' && t[i]=='@'){
                if(!st.count(s[i])){
                    cout<< "You will lose" << endl;
                    return 0;
                }
            }else if(s[i]!='@' && t[i]!='@'){
                cout<< "You will lose" << endl;
                return 0;
            }
        }
      }
      cout<< "You can win" << endl;
    }
    