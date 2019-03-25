/*
The first line of each test case contains the integers N (1 ≤ N ≤ 500, 000), the number of cities, and B
(N ≤ B ≤ 2, 000, 000), the number of ballot boxes. Each of the following N lines contains an integer ai,
(1 ≤ ai ≤ 5, 000, 000), indicating the population of the i-th city.
 A single blank line will be included after each case. The last line of the input will contain ‘-1 -1’
 and should not be processed.

Output
For each case, your program should output a single integer, the maximum number of people assigned
to one box in the most efficient assignment.

Sample Input
2 7
200000
500000

4 6
120
2680
3400
200

-1 -1

Sample Output
100000
1700
*/

#include <iostream>
using namespace std;

// quicksort obtenido de https://www.geeksforgeeks.org/quick-sort/
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    int n, b;
    while(true) {
        cin >> n >> b;
        int c[n];
        if(n == -1)
            break;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            arr[i] = c[i];
        }
        quickSort(arr, 0, n-1);
        cout << endl;
    }
    return 0;
}