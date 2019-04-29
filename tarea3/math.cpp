#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, fac;
    cin >> n;
    map<long long, long long> factors;
    fac = 2;
    while(n > 1){
        if (n%fac == 0){
            factors[fac] = factors[fac] + 1;
            n = n/fac;
        }else
            fac++;
    }
    long long res = 1;
    long long ma = 0;
    map<long long,long long>::iterator it;
    for(it=factors.begin(); it!=factors.end(); ++it){
        res = res * it->first;
        ma = max(ma, it->second);
    }
    long long ops = 0;
    bool mult = 0;
    for(it=factors.begin(); it!=factors.end(); ++it){
        if (it->second != ma){
            mult = 1;
            break;
        }
    }
    if(mult || (ceil(log2(ma)) != floor(log2(ma)))) 
        ops++;
    ops += ceil(log2(ma));

    cout << res  << " " << ops << endl;;
    return 0;
}
