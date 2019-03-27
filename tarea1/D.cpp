/*
Chloe, the same as Vladik, is a competitive programmer. 
She didn't have any problems to get to the olympiad like Vladik, but she was confused by the task proposed on the olympiad.
Let's consider the following algorithm of generating a sequence of integers. 
Initially we have a sequence consisting of a single element equal to 1. Then we perform (n - 1) steps. 
On each step we take the sequence we've got on the previous step, 
append it to the end of itself and insert in the middle the minimum positive integer we haven't used before. 
For example, we get the sequence [1, 2, 1] after the first step, the sequence [1, 2, 1, 3, 1, 2, 1] after the second step.
The task is to find the value of the element with index k (the elements are numbered from 1) in the obtained sequence, i. e. after (n - 1) steps.
Please help Chloe to solve the problem!

Input
The only line contains two integers n and k (1 ≤ n ≤ 50, 1 ≤ k ≤ 2n - 1).

Output
Print single integer — the integer at the k-th position in the obtained sequence.

Examples
Input
3 2
Output
2
Input
4 8
Output
4
Note
In the first sample the obtained sequence is [1, 2, 1, 3, 1, 2, 1]. The number on the second position is 2.

In the second sample the obtained sequence is [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1]. The number on the eighth position is 4.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int mid, start, end, res;
    res = n;
    start = 0;
    end = pow(2,n);

    while (start < end){
        mid = start + (end - start)/2;
        if(k == mid)
        	break;
        if(k < mid)
            end = mid;
        else
            start = mid + 1;
        res--;
    }
    cout << res << endl;
    return 0;
}