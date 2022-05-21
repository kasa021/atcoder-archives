/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31848088
 * Submitted at: 2022-05-21 12:15:36
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_b
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1],b[k+1];
    int maxi=0;
    set<int> s;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=k;i++) cin>>b[i];
    for(int i=1;i<=n;i++){
        maxi = max(maxi,a[i]);
    }
    for(int i=1;i<=n;i++){
        if(maxi == a[i]) s.insert(i);
    }
    bool p=false;
    for(int i=1;i<=k;i++){
        if(s.count(b[i])){
            cout<<"Yes"<<endl;
            p=true;
            break;
        }
    }
    if(p==false) cout<<"No"<<endl;


}