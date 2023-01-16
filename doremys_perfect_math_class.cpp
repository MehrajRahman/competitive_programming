#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> v(n);
    vector<int> p(n);

    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    p[0] = v[0];
    for(int i = 1; i < n; i++ ){

        p[i] = v[i] + p[i - 1];
    }

    int index = 0, sum= 0;

    for(int i = n-1; i >= 0; i-- ){
    	int val = p[i] - p[i - 1] ;
    	sum += val;
        if(sum > p[i- 1]){
            index = i;
            break;
        }
    }

    cout << n-  index << endl;

    return 0;
}