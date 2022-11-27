/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36840887
 * Submitted at: 2022-11-27 04:57:58
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_e
 * Result: RE
 * Execution Time: 2312 ms
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


int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(m),b(n),idx(n);
    rep(i,m)cin>>a[i],a[i]--;
    rep(i,n) b[i]=i;
    map<int,vector<int>> mp;
    mp[0]=b;
    rep1(i,1,m+1){
        int v=a[i-1],nv=a[i-1]+1;
        mp[i]=mp[i-1];
        auto tmp=mp[i][v];
        mp[i][v]=mp[i][nv];
        mp[i][nv]=tmp;
    }
    rep(i,n){
        idx[mp[m][i]]=i;
    }
    rep1(i,1,m+1){
        if(mp[i-1][a[i-1]]==0){
            cout<< idx[mp[i][a[i-1]]]+1 << endl;
        }else if(mp[i-1][a[i-1]+1]==0){
            cout<< idx[mp[i][a[i-1]]]+1 << endl;
        }else{
            cout<< idx[0]+1 << endl;
        }
    }
    // rep(i,m+2){
    //     for(auto k:mp[i])cout<< k << " ";
    //     cout<<endl;
    // }
    // for(auto k:idx)cout<< k << " ";
    //     cout<<endl;
}
   
