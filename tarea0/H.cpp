/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ((-1)**n)*n

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples
Input
4
Output
2
Input
5
Output
-3
Note
f(4) =  - 1 + 2 - 3 + 4 = 2

f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
*/

#include <iostream>

using namespace std;

int mainH() {
    int n;
    cin >> n;
    int res = 0;
    if(n%2 == 0)
        res = n/2;
    else
        res = (n+1)/-2;
    cout << res << endl;
    return 0;
}