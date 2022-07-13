/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/33199325
 * Submitted at: 2022-07-13 07:02:57
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_b
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    string s,t,u;
    cin>>s>>t;
   for(int k=0;k<=25;k++){
    string s2=s;
    for(int i=0;i<(int)s.size();i++){
        s2[i]=((s2[i]-'a')+k)%26+'a';
        }
        if(s2==t){
            cout<<"Yes"<<endl;
            return 0;
        }
   }
   cout<<"No"<<endl;
   return 0;
}