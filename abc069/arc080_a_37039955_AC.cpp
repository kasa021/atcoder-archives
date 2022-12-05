/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc069/submissions/37039955
 * Submitted at: 2022-12-05 09:38:24
 * Problem URL: https://atcoder.jp/contests/abc069/tasks/arc080_a
 * Result: AC
 * Execution Time: 38 ms
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
      int n;
      cin>>n;
      map<int,int> mp;
      rep(i,n){
        int a;
        cin>>a;
        if(a%4==0){
            mp[4]++;
        }else if(a%2==0){
            mp[2]++;
        }
        else mp[0]++;
      }
      
      if(mp[2]==0){
        if(mp[0]<=mp[4]+1){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
      }else {
        if(mp[0]<=mp[4]){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
      }
      return 0;
    }
