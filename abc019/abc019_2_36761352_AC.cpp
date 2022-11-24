/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/36761352
 * Submitted at: 2022-11-24 16:06:06
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_2
 * Result: AC
 * Execution Time: 12 ms
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
      string a;
      cin>>a;
      vector<pair<char,int>> rle(0);//Tが何個ある
      rle.push_back({a[0],0});
      rep(i,(int)a.size()){
        if(rle.back().first==a[i]){
          rle.back().second++;
        }else{
         rle.push_back({a[i],1});
         }
      }
      for(auto [s,i]:rle){
        cout<<s<<i;
      }
      cout<<endl;

    }