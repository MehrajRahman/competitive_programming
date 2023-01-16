#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n, k , mid;

    cin >> n >> k;

    if(n % 2 == 0){
        mid  = n/2;
        if( k > mid){
            // ?even
            cout << (k - mid) * 2 << endl;
        }
        else{
            // odd
            cout << 2 * k - 1 << endl;
        }
    }
    else{
        mid  = n/2 + 1;
        if(k  > mid){
            // even
            cout << (k - mid) * 2 << endl;
        }
        else{
            cout << 2 * k - 1 << endl;
        }
    }

    return 0;
}