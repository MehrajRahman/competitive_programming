#include <iostream>
using namespace std;

int main(){
    long long int t, n;
    cin >> t;
    for( int i = 0; i<t; i++){
        cin >> n;
        long long int arr[n];
        long long int max1  = 1, max2 = 1;
        for ( int j= 0; j< n; j++){
            cin >> arr[j];

        }

        for ( int j = 0; j< n; j++){
            int max = 1;
            for (int k =0; k< n; k++){
                if ( k != j){
                    if(arr[k]>max){
                        max = arr[k];
                    }
                }
            }
            if(j == n-1){
                cout << arr[j] -max << " " << endl;
            }
            else{
                cout << arr[j] - max << " ";
            }

        }








    }

    return 0;
}

