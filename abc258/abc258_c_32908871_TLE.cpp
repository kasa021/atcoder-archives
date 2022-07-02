/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32908871
 * Submitted at: 2022-07-02 12:38:31
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n,q;
    string s,k;
    cin>>n>>q>>s;
    
    while(q--){
        int t,x;
        cin>>t>>x;
        if(t==1){
            rep(i,x){
                k=s[n-1];
                s.pop_back();
                s=k+s;
            }
        }else if(t==2){
            cout<<s[x-1]<<endl;
        }
    }
    //cout<<s<<endl;

    return 0;
    
}