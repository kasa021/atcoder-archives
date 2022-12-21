/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/37429390
 * Submitted at: 2022-12-21 13:27:23
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    for(int c = B; ; c--) if((A + c - 1) / c < B / c){
        cout << c << endl;
        return 0;
    }
}
