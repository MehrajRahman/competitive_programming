#include <bits/stdc++.h>
using namespace std;

int main(){

    string a ,b;
    cin >> a;

    if(a[0] == '-'){
        int l = a.length();

        int big = max( a[l-2] ,  a[l-1] );

        int count = 0;

        if(l == 3 && a[l-1] == '0'){
            cout << '0' <<endl;
        }
        else{
            for(int i = 0; i < l; i++){
            if(count > 0){
                b += a[i];
            }
            else{
                if((i == l - 1 || i == l - 2 )&&(a[i] == big )){
                count++;
                }
                else{

                    b += a[i];
                }
            }
            
           
        }

        cout << b;

        }

        

    }else{
        cout << a << endl;
    }

    return 0;
}