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
            max1 = arr[0];
        }

        int flag = 0;
        for(int j = 0; j < n; j++ ){

            if(arr[j]  > max1){
                long long int mid = max1;
                max1 = arr[j];
                max2 = mid;
            }
            if(arr[j] < max1 && arr[j] > max2){
                max2 = arr[j];
            }

        }
        int value = max1;
        for(int j = 0; j< n;j++){
            if(value == arr[j]){
                flag++;
            }
        }


        if(flag > 1){
            max2 = max1;
        }



        for(int k = 0; k < n; k++ ){
            if (k == n){
                if (arr[k] == max1){
                    cout << arr[k] - max2 << " " << endl;
                }else{
                    cout << arr[k] - max1 << " " << endl;
                }
            }
            else{
               if (arr[k] == max1){
                    cout << arr[k] - max2 << " ";
                }else{
                    cout << arr[k] - max1 << " ";
                }
            }
        }

    }

    return 0;
}
