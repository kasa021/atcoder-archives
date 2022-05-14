/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31672188
 * Submitted at: 2022-05-14 12:28:12
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_b
 * Result: AC
 * Execution Time: 485 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int n,w;
    cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> S;

    for(int i=0;i<n;i++){
        if(a[i]<=w) S.insert(a[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        int r= a[i]+a[j];
        if(r<=w) S.insert(r);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int p=a[i]+a[j]+a[k];
                if(p<=w) S.insert(p);
            }
        }
    }
    int ans = S.size();
    cout<<ans<<endl;
    return 0;
}