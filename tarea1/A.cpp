/*
Dado un arreglo (vector) de N enteros ordenados de forma no decreciente, se realizaran Q consultas,
cada una consta de un entero. Utilice búsqueda binaria para responder el indice de la primera ocurrencia
del entero solicitado en el arreglo.

Input
En la primera linea recibirá un entero N (1 <= N <= 10^5) y un entero Q (1 <= Q <= 10^5).

En la segunda linea hay N enteros separados por espacios, cada entero toma un valor entre 1 y 10^9.

A continuación siguen Q lineas, cada una con un entero entre 1 y 10^9, representando una consulta.

Output
Por cada consulta (en el orden en que estas fueron recibidas) imprima una linea que consiste de un entero,
el índice de la primera aparición del elemento consultado, o -1 si no está presente en los N enteros iniciales.

Example
Input:
10 4
1 3 4 5 5 6 7 8 8 17
3
5
9
1
Output:
1
3
-1
0
*/

#include <iostream>
using namespace std;
int search(const int *ar, int n, int len){
    int i = 0;
    int j = len;
    int mid;
    while(i<j){
        mid = i+(j-i) /2;
        if(ar[mid] < n)
            i = mid + 1;
        else
            j = mid;
    }
    if(ar[i] == n)
        return i;
    return -1;
}
int mainA(){
    int n, q;
    cin >> n >> q;
    int arr[n];
    int con[q];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int j = 0; j < q; ++j){
        cin >> con[j];
    }

    for(int s : con)
        cout << search(arr, s, n) << endl;
    return 0;
}