/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35509676
 * Submitted at: 2022-10-08 13:46:53
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_c
 * Result: AC
 * Execution Time: 81 ms
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
#define all(vec) vec.rbegin(), vec.rend()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;



int main(){
      int n;
      cin>>n;
      vector<int> odd,even;
      rep(i,n){
        int a;
        cin>>a;
        if(a&1){
            odd.push_back(a);
        }else {
            even.push_back(a);
        }
      }
      sort(all(odd));
      sort(all(even));
      int mx=-1;
      if(odd.size()>=2)mx=max(mx,odd[0]+odd[1]);
      if(even.size()>=2) mx=max(mx,even[0]+even[1]);
      cout<< mx << endl;
    }

