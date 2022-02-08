/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29164754
 * Submitted at: 2022-02-08 11:52:02
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_q
 * Result: RE
 * Execution Time: 2184 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b){
    while(a>=1&&b>=1){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a>=0) return a;
    else return b;
}

int main(){
    long long n,m;
    vector<long long> a(1000000);
    vector<vector<long long>> b(100000, vector<long long>(100000,0));

    cin>>n;
    m=1;
    for (long long i=0;i<=n;i++) cin>>a[i];

    for (long long i=0; i<=n;i++)
      for (long long j=0; j<=n;j++){
          if(i<j) {b[i][j]=GCD(a[i],a[j]); 
          m*=b[i][j];
      }
    
    cout<<m<<endl;
    
}
}