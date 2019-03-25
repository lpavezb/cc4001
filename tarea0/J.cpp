#include <iostream>

using namespace std;

int mainJ() {
    int n;
    cin >> n;
    char stones;
    int last = 0;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        cin >> stones;
        switch (stones){
            case 'R':
                if(last == 1)
                    res++;
                last = 1;
                break;
            case 'G':
                if(last == 2)
                    res++;
                last = 2;
                break;
            default:
                if(last == 3)
                    res++;
                last = 3;
                break;
        }
    }
    cout << res << endl;
    return 0;
}