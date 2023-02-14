/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/38888212
 * Submitted at: 2023-02-14 12:57:58
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <iostream>
#include <string>
using namespace std;

int S(string n){
    return (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
}
int main(){
    string A, B;
    cin >> A >> B;
    cout << max(S(A), S(B)) << endl;
}
