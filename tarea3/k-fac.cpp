#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, fac;
	cin >> n >> k;
	vector<int> factors;
	fac = 2;
	while(n > 1){
		if (n%fac == 0){
			factors.push_back(fac);
			n = n/fac;
		}else
			fac++;
	}
	if (factors.size() < k)
		cout << -1 << endl;
	else{
		for (int i = 0; i < k-1; ++i)
			cout << factors[i] << " ";
		int last = 1;
		for (int i = k-1; i < factors.size(); ++i){
			last = last * factors[i];
		}
		cout << last << endl;
	}
	return 0;
}
