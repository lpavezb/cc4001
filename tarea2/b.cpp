#include <bits/stdc++.h>

using namespace std;

int main(){
	string word;
	cin >> word;
	int n = word.size();
	int small_to_left[n];
	int capital_to_right[n];
	small_to_left[0] = 0;
	capital_to_right[n-1] = 0;

	for (int i = 1; i < n; ++i)
		if(word[i-1] >= 'a')
			small_to_left[i] = small_to_left[i-1] + 1;
		else
			small_to_left[i] = small_to_left[i-1];
	
	for (int i = n-2; i >= 0; --i)
		if(word[i+1] <= 'Z')
			capital_to_right[i] =  capital_to_right[i+1] + 1;
		else
			capital_to_right[i] = capital_to_right[i+1];

	int m = n;
	for (int i = 0; i < n; ++i)
		m = min(m, small_to_left[i] + capital_to_right[i]);
	cout << m << endl;
	return 0;
}