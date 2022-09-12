/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/34813723
 * Submitted at: 2022-09-12 06:14:37
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_d
 * Result: AC
 * Execution Time: 178 ms
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

int n;
string s="";
void dfs(int n);

int main(){
      cin>>n;
      dfs(0);
    }

void dfs(int a){
    if(a==n){
        cout<< s << endl;
        return;
    }

    char biggest='a';
    while(s.find(biggest)!=string::npos) biggest++;
    biggest--;
    for(char c='a';c<=biggest+1;c++){
        s.push_back(c);
        dfs(a+1);
        s.pop_back();
    }
}