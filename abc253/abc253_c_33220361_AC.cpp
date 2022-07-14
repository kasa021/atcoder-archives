/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/33220361
 * Submitted at: 2022-07-14 10:59:05
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 277 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using P = pair<int,int>;

using ll = long long ;

int main() {
    int q;
    cin>>q;
    int m=999999999,M=0;
    map<int,int> a;
    set<int> s;
    while(q--){
        int t,x,c;
        cin>>t;
        if(t==1){
            cin>>x;
            s.insert(x);
            
            a[x]++;
        }else if(t==2){
            cin>>x>>c;
            int w=min(c,a[x]);
            a[x]-=w;
            if(a[x]==0){
                 s.erase(x);
                
            }
        }else{
            m=*begin(s);
                 M=*rbegin(s);
            //cout<<M<<" "<<m<<endl;
            cout<<M-m<<endl;
        }
    }
    return 0;
}