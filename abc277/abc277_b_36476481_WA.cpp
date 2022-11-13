/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36476481
 * Submitted at: 2022-11-13 12:17:20
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_b
 * Result: WA
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
      int n;
      bool f=false;
      cin>>n;
      vector<string> s(n);
      vector<char> a={'H' , 'D' , 'C' , 'S'},b={'A' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'T' , 'J' , 'Q' , 'K'};
      rep(i,n){
        cin>>s[i];
        rep(j,4){
            if(a[j]==s[i][0]) f=true;
        }
        if(!f){
            cout<< "No" << endl;
            return 0;
        }

        f=false;
        rep(j,13){
            if(b[j]==s[i][1]) f=true;
        }
        if(!f){
            cout<< "No" << endl;
            return 0;
        }
      }
      rep(i,n-1){
        rep1(j,i+1,n){
            if(s[i]==s[j]){
            cout<< "No" << endl;
            return 0;
        }
        }
      }
      cout<< "Yes" << endl;
      
    }