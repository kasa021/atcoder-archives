/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/33268377
 * Submitted at: 2022-07-16 13:04:04
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_b
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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> h(n);
    rep(i,n) cin>>h[i];
    
    sort(h.begin(),h.end());
    int cnt=h[0];
    while(1){
        cnt=h[0];
        h[0]+=a;
        h[n-1]-=b;
        sort(h.begin(),h.end());
        if(cnt>h[0]) break;
    }
    //rep(i,n) cout<<h[i]<<endl;
    //cnt+=a;
    cout<<cnt<<endl;

}