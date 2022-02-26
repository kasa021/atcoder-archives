/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29669744
 * Submitted at: 2022-02-26 12:08:20
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int a[11];
int main(){
    for(int i=0;i<=9;i++) cin>>a[i];
    int k=0;

    for(int i=0;i<=9;i++){
        if(k == a[i]) k=a[i];
    }

    k=a[k];
    k=a[k];
    k=a[k];

    cout<<k<<endl;
}