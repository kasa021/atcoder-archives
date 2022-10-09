/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/35529021
 * Submitted at: 2022-10-09 07:47:59
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_c
 * Result: AC
 * Execution Time: 540 ms
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
      int n,q,cnt=0;
      cin>>n>>q;
      string s;
      cin>>s;
      rep(i,q){
        int k,l;
        cin>>k>>l;
        if(k==1){
            cnt+=l%n;
            cnt%=n;
            //cout<< cnt << endl;
        }else{
            l--;
            //cout<< cnt << endl;
            cout<< s[(l-cnt+n)%n] << endl;
        }
      }
    }