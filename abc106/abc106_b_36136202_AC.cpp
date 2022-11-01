/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/36136202
 * Submitted at: 2022-11-01 09:55:18
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int enum_div(int n){
    vector<int> ret;
    for(int i = 1 ; i*i <= n ; ++i){
        if(n%i == 0){
            ret.push_back(i);
            if(i*i != n){
                ret.push_back(n/i);
           }
       }
   }
return (int)ret.size();
}

int main() {
   int n,ans=0;
   cin>>n;
   for(int i=3;i<=n;i+=2){
    if(enum_div(i)==8) ans++;
   }
   
   cout<< ans << endl;
}