#include <iostream>
using namespace std;

int main(){
    int t, a,b,c,max, min, mid;
    cin >> t;
    for ( int i = 0; i<t; i++){
        cin >> a >> b >> c;

        if(a > b){
            if ( a > c){
                if (b>c){
                    mid = b;
                }else{
                    mid  = c;
                }
            }
            else{
                mid  = a;
            }
        }
        else{
            if ( b > c){
                if (a>c){
                    mid = a;
                }else{
                    mid  = c;
                }
            }
            else{
                mid  = b;
            }
        }

        cout << mid << endl;

    }

    return 0 ;
}
