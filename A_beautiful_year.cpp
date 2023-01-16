#include <iostream>
using namespace std;

int main(){
    int v,n, arr[4],x =3, s= 1 ;
    cin >> n;
    v = n;

    while (n>0){
        arr[x] = n %10;
        n = n/10;
        x--;
    }


    //cout << arr[0] << arr[1]<<arr[2]<<arr[3];

    for (int i = 0; i < 1; ++i ){
        for (int j = 1; j < 4; ++j){
            if(arr[i] == arr[j]){
                arr[j]++;
            }
        }
    }

   /* for (int i = 3; i>0 ; i--){
        for (int j = 2; j > 1; j--){
            if(arr[i] == arr[j]){
                arr[i]++;
            }
        }
    }*/

    while (s==1){
        v++;
        arr[3]++;
    }
    cout << arr[0] << arr[1]<<arr[2]<<arr[3];
    return 0;
}
