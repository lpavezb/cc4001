#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int h, w, aux, t;
    int it = 0;
    cin >> t;
    while(it < t){
        it++;
        vector<vector<int> > m;
        cin >> h >> w;
        vector<int> row;
        m.push_back(row);
        for (int i = 0; i < w + 2; ++i){
            m[0].push_back(0);
        }
        for (int i = 1; i <= h; ++i){
            m.push_back(row);
            m[i].push_back(0);
            for (int j = 1; j < w+1; ++j){
                int op = max(m[i-1][j-1], max(m[i-1][j], m[i-1][j+1]));
                cin >> aux;
                m[i].push_back(aux + op);
            }
            m[i].push_back(0);       
        }

        int max_n = 0;
        for (int i = 1; i <= w; ++i)
            max_n = max(max_n, m[h][i]);

        cout << max_n << endl;
    }
    return 0;
}