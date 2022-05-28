/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/31993243
 * Submitted at: 2022-05-28 08:43:02
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(n);
    map<int,int> p;
    rep(i,n) cin>>a[i];
    rep(i,m)cin>>b[i];
    rep(i,n) p[a[i]]++;
    bool f=true;
    rep(i,m) {
        if(p[b[i]]>0) {
            p[b[i]]--;
        }else{
            f=false;
        } 
        }
        if(f) {cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
        return 0;
}