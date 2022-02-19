/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29423324
 * Submitted at: 2022-02-19 10:33:59
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_x
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int n,k;
int a[1000009];
int b[1000009];
int x=0;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    for(int i=1;i<=n;i++){
        x += abs(a[i] - b[i]);
    }

    if(k>=x&& k%2 == x%2) cout<<"Yes"<< endl;
    else cout<<"No"<<endl;

    return 0;
}
