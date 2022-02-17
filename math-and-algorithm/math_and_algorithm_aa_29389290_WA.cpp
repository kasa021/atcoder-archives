/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29389290
 * Submitted at: 2022-02-17 12:49:41
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_aa
 * Result: WA
 * Execution Time: 370 ms
 */

#include <bits/stdc++.h>
using namespace std;

int N, A[200009], C[200009];

void MergeSort(int l, int r){

    if(r-l == 1) return;

    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m,r);

    int c1 =l, c2=m, cnt=0;
    while(c1 !=m||c2!=r){
        if(c1 == m){
            C[cnt] = A[c2]; c2++;
        }
        else if(c2==r){
            //列B’がからの場合
            C[cnt] = A[c1]; c1++;

        }
        else{
            //いずれでもないとき
            if (A[c1]<=A[c2]){
                C[cnt] =A[c1]; c1++;
            }
            else {
                C[cnt]=A[c2]; c2++;
            }

        }
        cnt++;
    }

    for (int i=0;i<cnt;i++) A[l+i]=C[i];  

}

int main(){
     cin>>N;
     for(int i=0;i<N; i++) cin>> A[i];

     MergeSort(1,N+1);
     for(int i=1;i<=N;i++) cout<<A[i]<<endl;
     return 0;
}