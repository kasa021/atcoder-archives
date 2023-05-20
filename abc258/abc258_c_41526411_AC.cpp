/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/41526411
 * Submitted at: 2023-05-20 03:35:05
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_c
 * Result: AC
 * Execution Time: 525 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,q,x_count=0; // x_count何回ずらしたか
  string s;
  cin>>n>>q>>s;
  for(int i=0;i<q;i++){
    int t,x;
    cin>>t>>x;
    if(t==1){
      x_count+=x;
      x_count%=n;
    }else {
      x--; // 0-indexedに直す;
      cout<<s[(x-x_count+n)%n]<<endl;
    }
  }
}