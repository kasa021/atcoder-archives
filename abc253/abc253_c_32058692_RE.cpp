/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32058692
 * Submitted at: 2022-05-28 13:56:31
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: RE
 * Execution Time: 104 ms
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
    vector<int> cnt(1000000,0);

    for(int i=1;i<=q;i++){
        int a;
        cin>>a;
        if(a==1){
            int x;
            cin>>x;
            cnt[x]++;
            st.insert(x);
        }
        if(a==2){
            int x;
            cin>>x>>c;
            b=min(c,cnt[x]);
            cnt[x]-=b;
            if(cnt[x]==0) st.erase(x);
        }
        if(a==3){
           
           cout<< *rbegin(st)-*begin(st)<<endl;
        }
    }
    
    return 0;
}