/*
Consider two integer sequences f(n) = n! and g(n) = an, where n is a positive integer. 
For any integer a > 1 the second sequence is greater than the first for a finite number of values. 
But starting from some integer k, f(n) is greater than g(n) for all n >= k. 
You are to find the least positive value of n for which f(n) > g(n), for a given positive integer a > 1.

Input
The first line of the input contains number t – the amount of tests. 
Then t test descriptions follow. Each test consist of a single number a.

Constraints
1 <= t <= 100000
2 <= a <= 106

Output
For each test print the least positive value of n for which f(n) > g(n).

Example
Input:
3
2
3
4

Output:
4
7
9
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, mid, start, end;
    for (int i = 0; i < n; ++i){
        start = 1;
        end = 100000;
        cin >> a;
        while (start < end){
            mid = start + (end - start)/2;
            if(mid*log(mid)*(5.0/6) > mid*log(a))
                end = mid;
            else
                start = mid + 1;
        }
        cout << start << endl;
    }
    return 0;
}