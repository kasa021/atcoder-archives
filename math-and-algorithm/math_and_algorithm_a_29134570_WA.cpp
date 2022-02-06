/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134570
 * Submitted at: 2022-02-06 16:05:27
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <iostream>
using namespace std;
int main(void){
    int a,b,c=0;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        c+=b;//This language name!!!
    }
    cout << c%100 << endl;
}