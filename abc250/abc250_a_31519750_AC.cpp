/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31519750
 * Submitted at: 2022-05-08 12:09:47
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int h,w,r,c;
    int ans = 0;
    cin>>h>>w>>r>>c;

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            
            if((abs(r-i)+abs(c-j)) == 1) ans++;
        }
    }

    cout<<ans<<endl;
    return 0;

}