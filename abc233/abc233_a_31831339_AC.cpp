/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/31831339
 * Submitted at: 2022-05-21 11:13:10
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int x,y;
    cin>>x>>y;
    int i =0;
    while(x<y){
       x+=10;
       i++;
    }
    cout<<i<<endl;
    
}