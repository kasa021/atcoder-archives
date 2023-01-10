/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc029/submissions/37926285
 * Submitted at: 2023-01-10 13:11:22
 * Problem URL: https://atcoder.jp/contests/abc029/tasks/abc029_c
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

vector<vector<bool>> seen(10,vector<bool>(3,false));
void dfs(string s,int n){
    int size=s.size();
    if(size==n){
        cout<< s << endl;
    }else {
        for(char c='a';c<='c';c++){
            dfs(s+c,n);
        }
    }
}
int main(){
      int n;
      cin>>n;
      dfs("",n);
    }
