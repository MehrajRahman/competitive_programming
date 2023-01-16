#include <iostream>
using namespace std;

int main(){
    int s, all_weight = 0, all_cost = 0;
    cin >> s;

    int arr[s][2];

    for(int i = 0; i < s; i++ ){
        int a,b;
        cin >> a >> b;

        arr[i][0] = a;
        arr[i][1]  =b;

    }
    int min  = arr[0][1], index = 0;
    for(int i = 0; i < s; i++){
        if(min > arr[i][1]){
            min  = arr[i][1];
            index = i;
        }
    }

    for(int i = 0; i < s; i++){
        if(  i >= index){
            all_weight = all_weight + arr[i][0];
        }
        else{
            all_cost = all_cost + arr[i][0]* arr[i][1];
        }
    }




   // cout << "All COST: " <<all_cost;

    for(int i = 0; i < index; i++){
        int  all_cost_revised = 0, all_weight = 0;
        for(int j = 0; j < i; j++){
            all_cost_revised = all_cost_revised + arr[j][0] * arr[j][1];
        }

        for(int j = i; j < index; j++){
            all_weight = all_weight + arr[j][0] ;
        }
        all_cost_revised = all_cost_revised + all_weight * arr[i][1];



        if(all_cost_revised < all_cost){
            all_cost = all_cost_revised;
        }

    }

    all_cost = all_cost + all_weight * min;


    cout << all_cost << endl;










    return 0;
}
