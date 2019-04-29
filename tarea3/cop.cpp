#include <bits/stdc++.h>

using namespace std;

int main(){
	long long l, r;
	cin >> l >> r;
	long long pairs = (r-l+1)/2;
	cout << "YES" << endl;
	for (long long i = 0; i < pairs; i++){
		cout << l << " " << l+1 << endl;
		l += 2;
	}
	return 0;
}
