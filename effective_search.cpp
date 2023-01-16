#include <iostream>

using namespace std;

#define lli long long int

int main(){
    lli n, m, f1 = 0, f2 = 0, mid;
    cin >> n ;
    lli am[n];
    for(lli i = 0 ; i < n; i++){
        cin >> am[i];
    }
    cin >> m;
    lli arr[m];
    for(lli i = 0 ; i < m; i++){
        cin >> arr[i];
    }

    if(n %2 == 1){
        mid = n/2 + 1;
    }else{
        mid = n/2;
    }


    for(lli i = 0; i  < m ; i++ ){
        lli k= 0, l = 0;

        lli x = arr[i];

        for(lli j = 0; j <= mid;j++){

           if(x == am[j]){
                k = j + 1;
                l  = n - j ;
                break;
           }
           else if(x == am[n - (j+1)]){
                k = n - j ;
                l = j + 1;
                break;
           }
        }

        f1 = f1 + k;
        f2 = f2 + l;
    }




    cout << f1 << " " << f2;



    return 0;
}
