#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }



    int order = 0,maxOrder = 0;;

    
    for(int i = 1; i < n ; i++){
        if(v[i] >= v[i-1]){
            order++;
            if(order > maxOrder){
                maxOrder = order;
            }
        }
        else{
            order = 0;
        }
    }

    cout << maxOrder + 1 << endl;

    return 0;
}