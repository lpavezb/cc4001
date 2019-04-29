#include <bits/stdc++.h>
#include <vector>
using namespace std;

int optimal(vector<int> list){
    int n = list.size();
    vector<int> res;
    res.push_back(0);
    res.push_back(0);
    for (int i = 2; i < n + 2; ++i){
        res.push_back(max(res[i-1], res[i-2] + list[i-2]));
    }
    return max(res[n+1], res[n]);
}

int main(){
    int m, n, aux;
    cin >> m >> n;
    vector<int> res;
    while(m != 0){
        vector<vector<int> > block;
        vector<int> row;
        for (int i = 0; i < m; ++i){
            block.push_back(row);
            for (int j = 0; j < n; ++j){
                cin >> aux;
                block[i].push_back(aux);
            }
        }

        vector<int> optimal_vector;
        for (int i = 0; i < m; ++i)
            optimal_vector.push_back(optimal(block[i]));

        cout << optimal(optimal_vector) << endl;
        cin >> m >> n;
    }
    return 0;
}