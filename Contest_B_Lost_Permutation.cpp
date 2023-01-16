#include <iostream>
using namespace std;
int main(){
    int t, s, n,x, ts = 0,st = 1, count = 0;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> s;
        int arr[50];

        for( int j = 0; j < n;j++){
            cin >> x ;
            arr[j] = x;
        }

        for(int k = 1; k <= 50 && ts < s; k++ ){
            int status = 0;
            for(int l = 0; l<n;l++){
                if(arr[l] == k){
                    status = 1;
                    break;
                }
            }

            if(status ==0 ){
                count++;
                ts = ts + k;
                //cout<<"TS is :" <<ts << "S is " <<s;
                arr[n+count -1] = k;
                //cout<<"Added Value for test case: " << i<<arr[n+count-1] <<"in index: "<< endl;
            }
        }


        if(ts == s){
            int v = 1,  f = 0;
            for(int in = 1; in<=50 && v !=0; in++){
                int t  = 1;
                for(int j = 0 ; j <50 && t != 0  ; j++){
                    if(arr[j] == in){
                        f = 1;
                        t = arr[j];
                        break;
                    }


                    t = arr[j];
                }

                if(f == 0){
                    st == 0;
                    cout <<"No"<<endl;
                }
                v = arr[in+1];

                f = 0;


            }

            if(st != 0){
                cout << "Yes"  <<  endl;
            }

           //cout << "Yes";
        }else{
            cout << "No" <<endl;
        }

        ts = 0;
        count = 0;
        st =1;



    }

    return 0;
}
