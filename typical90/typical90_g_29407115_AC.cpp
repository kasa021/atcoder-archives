/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29407115
 * Submitted at: 2022-02-18 13:42:26
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: AC
 * Execution Time: 661 ms
 */

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int INF = 2000000000;
int N;
int A[300009];
int Q;
int B[300009];
    
int main(){
    cin>>N;
    for(int  i=1;i<=N;i++)  cin>>A[i];
    cin>>Q;
    for(int i=1;i<=Q;i++) cin>>B[i];

    sort(A + 1, A + N + 1);//sortする

    for(int i=1;i<=Q;i++){
        int pos1=lower_bound(A+1,A+N+1,B[i]) - A; //これでb[i]以上の左側のa[k]がわかるらしい。
        int px=INF, py=INF;

        if(pos1<=N) px=abs(B[i] - A[pos1]);
        if(pos1>=2) py=abs(B[i] -A[pos1 - 1]);
        cout<<min(px,py)<<endl;
    }
    return 0;
    
}
