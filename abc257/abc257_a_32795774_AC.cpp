/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32795774
 * Submitted at: 2022-06-27 08:32:08
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_a
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
    int n,x;
    cin>>n>>x;
   cout<<(char)('A'+(x-1)/n)<<endl;
   return 0;
}