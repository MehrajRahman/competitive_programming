#include <iostream>
using namespace std;

int main (){

    int t,n, a,b;
    cin >> t;

    for (int i = 0; i<t; i++){
    cin >>n >>a >>b;
        if ( n ==1  && a == 1 && b == 1){
            cout << "Yes" << endl;
        }
        else if(  a==n && b == n){
            cout << "Yes" << endl;
        }
        else{
            if(n -(a+b) >= 2 ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }

    }


    return 0;
}
