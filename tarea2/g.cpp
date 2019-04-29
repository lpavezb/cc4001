#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n, aux;
    int m = 0;
    map<int, int> table;
    vector<int> seq;
    vector<int> costs;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> aux;
        seq.push_back(aux);
        costs.push_back(0);
    }
    
    for (int i = 0; i < n; ++i){
        table[seq[i]] = table[seq[i]-1] + 1;
        costs[i] = table[seq[i]];
        m = max(m, costs[i]);
    }
    vector<int> res;
    int val;
    for (int i = 1; i < n+1; ++i){
        if (costs[i-1]==m){
            val = seq[i-1];
            cout << m << endl;
            res.push_back(i);
            while(i > 1){
                i--;
                if(seq[i-1] == val-1){
                    res.push_back(i);
                    val--;;
                }
            }
            break;
        }
    }
    for (int i = res.size(); i > 0; --i)
        cout << res[i-1] << " ";
    cout << endl;
    return 0;
}