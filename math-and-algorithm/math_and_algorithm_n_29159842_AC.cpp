/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29159842
 * Submitted at: 2022-02-08 07:09:26
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_n
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(0);

    for(long long i=2;i*i<=n;i++){
        while (n%i==0){
            cout << i<<" ";
            n/=i;
        }
}
 if(n!=1) cout<<n;
  cout<<endl;

}