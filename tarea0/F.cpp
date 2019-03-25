/*
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday.
We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together.
They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars
will the children need if all members of each group should ride in the same taxi
(but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren.
The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space,
si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
Input
5
1 2 4 3 3
Output
4
Input
8
2 3 4 4 2 1 3 1
Output
5

6
1 4 2 2 1 2
3
*/

#include <iostream>

using namespace std;

int mainF() {
    int n, aux;
    int one, two, three, res;
    one = two = three = res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        switch (aux) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            default:
                res++;
                break;
        }
    }
    if(one > three){
        res += three;
        one -= three;
        three = 0;
    } else{
        res += three;
        one = 0;
        three = 0;
    }

    res += two/2;
    if(two%2 != 0){
        res++;
        one -= 2;
    }

    if(one>0){
        res += one/4;
        if(one%4 > 0)
            res++;
    }

    cout << res << endl;
    return 0;
}