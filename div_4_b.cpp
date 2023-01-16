#include <iostream>
#include <string>
using namespace std;

int main (){
    int t,n,x ,max = 0;
    string a;
    cin >> t;
    for (int i = 0; i<t; i++ ){
        cin >>n;
        cin >>a;
        for (int j = 0; j < n; j++){
            x = a[j];
            x = x - 96;
            if(x >max){
                max = x;
            }
        }
        cout << max << endl;
        max = 0;

    }

    return 0;
}
