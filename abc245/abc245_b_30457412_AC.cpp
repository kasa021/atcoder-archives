/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30457412
 * Submitted at: 2022-03-26 12:39:57
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
int n;
int a[2009];
int b[2009];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<2001;i++) b[i]=0;

    

    for(int i=1;i<=n;i++){
        b[a[i]]++;
    }

    int i;
    for( i=0;i<=n;i++){
        if(b[i] ==0) break;
        
    }
    cout<<i<<endl;

    return 0;



}