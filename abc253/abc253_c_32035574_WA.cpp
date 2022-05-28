/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32035574
 * Submitted at: 2022-05-28 12:52:02
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: WA
 * Execution Time: 2206 ms
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
    multiset<int> st;

    for(int i=1;i<=q;i++){
        int a;
        cin>>a;
        if(a==1){
            int x;
            cin>>x;
            st.insert(x);
        }
        if(a==2){
            int cnt=0,c,x;
            cin>>x;
            cin>>c;
            int w=st.count(x);
            cnt=min(c,w);
            for(int j=1;j<=cnt;j++){
                st.erase(st.find(x));
            }
        }
        if(a==3){
            auto ans=st.end();
            auto anss=st.begin();
           
            cout<<*anss-*ans<<endl;
        }
    }
    return 0;
}