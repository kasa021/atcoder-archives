/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32059664
 * Submitted at: 2022-05-28 14:05:24
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 259 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int q;
    cin>>q;
    int b,c;
    set<int> st;
    map<int,int> mp;

    for(int i=1;i<=q;i++){
        int a;
        cin>>a;
        if(a==1){
            int x;
            cin>>x;
            mp[x]++;
            st.insert(x);
        }
        if(a==2){
            int x;
            cin>>x>>c;
            b=min(c,mp[x]);
            mp[x]-=b;
            if(mp[x]==0) st.erase(x);
        }
        if(a==3){
           int k=*rbegin(st);
           int l=*begin(st);
           cout<<k-l<<endl;
        }
    }
    
    return 0;
}