/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/41877385
 * Submitted at: 2023-05-31 15:36:08
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; // 4桁の数字
    cin>>s;
    for(int i=0;i<(1<<3);i++){  // 3つの+,-の組み合わせなので2^3通り
        int sum = s[0]-'0';     // 1桁目は符号なし
        for(int j=0;j<3;j++){   
            if(i & (1<<j)){     // iのjビット目が1ならば+、0ならば-
                sum += s[j+1]-'0';
            }else {
                sum -= s[j+1]-'0';
            }
        }
        if(sum==7){  // 7になったら終了
            cout<<s[0];
            for(int j=0;j<3;j++){
                if(i & (1<<j)){    // iのjビット目が1ならば+、0ならば-
                    cout<<"+";
                }else {
                    cout<<"-";
                }
                cout<<s[j+1];
            }
            cout<<"=7"<<endl;
            return 0;
        }
    }
}