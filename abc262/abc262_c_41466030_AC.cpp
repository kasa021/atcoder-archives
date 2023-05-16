/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/41466030
 * Submitted at: 2023-05-16 15:19:48
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
        if(a[i]==i) same++; // a[i]==iであるものの数を数える
      }
      long long ans=0;
      for(int i=0;i<n;i++){
        if(a[i]==i) ans+=same-1; // a[i]==iであるとき、a[i]以外のa[j]==jを満たすものと
        else {                   // 条件を満たすため、ans+=same-1
            if(a[a[i]]==i) ans++; // a[a[i]]==iならば条件を満たすのでインクリメント
        }
      }
      cout<< ans/2 << endl;  // 答えは重複して数えているため2で割る 
    }