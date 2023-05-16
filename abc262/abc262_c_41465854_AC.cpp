/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/41465854
 * Submitted at: 2023-05-16 15:11:51
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_c
 * Result: AC
 * Execution Time: 116 ms
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
      long long  n,same=0;
      cin>>n;
      vector<long long> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
        if(i==a[i]) same++;
      }
      long long ans=0;
      for(int i=0;i<n;i++){
        if(a[i]==i) ans+=same-1;
        else {
            if(a[a[i]]==i) ans++;
        }
      }
      cout<< ans/2 << endl;
    }