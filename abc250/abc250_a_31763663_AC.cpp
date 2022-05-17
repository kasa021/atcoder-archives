/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31763663
 * Submitted at: 2022-05-17 10:15:56
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int h,w,r,c;
    cin>>h>>w>>r>>c;
    int ans=0;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(abs(i-r)+abs(j-c)==1) ans++;
        }
    }
    cout<<ans<<endl;
    
}