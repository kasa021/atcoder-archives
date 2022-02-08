/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29163987
 * Submitted at: 2022-02-08 11:10:36
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_p
 * Result: AC
 * Execution Time: 91 ms
 */

 #include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b){
    while(a>=1 && b>=1){
        if(a<b) b = b % a;
        else a = a % b;
    }
    if(a>=1) return a;
    return b;
}

int main(){
    int n;
    vector<long long > a(10000000);

    cin>>n;
    for (int j=0;j<n;j++)
      cin>>a[j];
    
    long long ans=a[0];
    for(int i=1;i<n;i++){
        ans=GCD(ans, a[i]);
    }

    cout<<ans<<endl;

}