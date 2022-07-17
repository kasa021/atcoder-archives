/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33296107
 * Submitted at: 2022-07-17 12:06:17
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    string s;
    cin>>s;
    int a=-1;
    if(s[0]==s[1]&&s[1]==s[2]) cout<<a<<endl;
    else if(s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[0]) cout<<s[0]<<endl;
    else if(s[0]==s[1]) cout<<s[2]<<endl;
    else if(s[1]==s[2]) cout<<s[0]<<endl;
    else if(s[2]==s[0]) cout<<s[1]<<endl;
    else cout<<a<<endl;
    }