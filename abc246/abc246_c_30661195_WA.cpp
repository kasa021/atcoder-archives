/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30661195
 * Submitted at: 2022-04-02 13:11:47
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_c
 * Result: WA
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int N, A[200009], C[200009];


void MergeSort(int l, int r) {
	
	if (r - l == 1) return;
	
	
	int m = (l + r) / 2;
	MergeSort(l, m);
	MergeSort(m, r);
	
	int c1 = l, c2 = m, cnt = 0;
	while (c1 != m || c2 != r) {
		if (c1 == m) {
			
			C[cnt] = A[c2]; c2++;
		}
		else if (c2 == r) {
			
			C[cnt] = A[c1]; c1++;
		}
		else {
			
			if (A[c1] <= A[c2]) {
				C[cnt] = A[c1]; c1++;
			}
			else {
				C[cnt] = A[c2]; c2++;
			}
		}
		cnt++;
	}
	for (int i = 0; i < cnt; i++) A[l + i] = C[i];
}


int main(){
    int n,k,x;
    vector<int> a(200009);

    cin>>n>>k>>x;
    rep(i,n) cin>>a[i];

    for(int i=k;i>0;i--){
        MergeSort(1, n+1);
        a[n-1] = max(a[n-1]-x,0); 
    }
    int ans=0;
    rep(i,n) ans+=a[i];

    cout<<ans<<endl;
    return 0;

}