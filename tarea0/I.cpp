#include <iostream>

using namespace std;

int mainI() {
    int n;
    cin >> n;
    int m, c, d, u;
    while(true){
        n++;
        m = n / 1000;
        c = (n / 100) % 10;
        d = (n / 10) % 10;
        u = n % 10;
        if(!(m == c || m == d || m == u || c == d || c == u || d == u)){
            cout << n << endl;
            return 0;
        }
    }
}