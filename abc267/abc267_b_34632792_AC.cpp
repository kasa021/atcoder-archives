/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34632792
 * Submitted at: 2022-09-05 07:53:54
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_b
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
      s='a'+s;
      if(s[1]=='1'){
        cout<<"No"<<endl;
        return 0;
      }else {
        vector<bool> c(7);
        c[0] = (s[7] == '1');
        c[1] = (s[4] == '1');
        c[2] = (s[2] == '1') or (s[8] == '1');
        c[3] = (s[1] == '1') or (s[5] == '1');
        c[4] = (s[3] == '1') or (s[9] == '1');
        c[5] = (s[6] == '1');
        c[6] = (s[10] == '1');
        rep(i,7){
            rep(j,i){
                if(c[i]and c[j]){
                    rep1(k,j+1,i){
                        if(!c[k]){
                            cout<<"Yes";
                            return 0;
                        }
                    }
                }
            }
        }
      }
      cout<<"No"<<endl;
    }