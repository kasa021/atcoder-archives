/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29163915
 * Submitted at: 2022-02-08 11:05:45
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_p
 * Result: RE
 * Execution Time: 140 ms
 */

#include <bits/stdc++.h>

using namespace std;

long long GCD(long long int a, long long int b){
    while(a>=1&&b>=1){
        if(a<b) b=b%a;
        else a=a%b;
    }
    if(a>=1) return a;
    return b;
}

int main(){
    long long n;
    vector<long long > a(n);

    cin>>n;
    for (int j=0;j<n;j++)
      cin>>a[1];
    
    long long ans=a[0];
    for(long long i=1;i<n;i++){
        ans=GCD(ans, a[i]);
    }

    cout<<ans<<endl;

}