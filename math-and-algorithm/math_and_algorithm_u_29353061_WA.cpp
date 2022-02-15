/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29353061
 * Submitted at: 2022-02-15 11:19:25
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_u
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
     int n, r;
     int x=1;
     
    cin>>n>>r;

    for (int i=0;i<r;i++){
        x *=n-i;
        x /=r-i;
    }

    

    cout<<x<<endl;

}