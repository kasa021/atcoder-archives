/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31683064
 * Submitted at: 2022-05-14 13:06:37
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_c
 * Result: AC
 * Execution Time: 128 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    vector<int> t(n);
    for(int i=0;i<n;i++) cin>>s[i]>>t[i];

    set<string> q;
    map<int,int> b;
    for(int i=0;i<n;i++){
        int k=q.size();
        q.insert(s[i]);
        if(k<(int)q.size()) b[i] = t[i];
    }
    int ans=0;
    for(auto p :b){
        ans=max(ans,p.second);
    }
    for(auto p: b){
        if(ans==p.second){
            cout<<p.first+1<<endl;
            break;
        }
    }
   
    return 0;
}