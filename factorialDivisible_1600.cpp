#include <iostream>
using namespace std;
int main(){
    int x, n, a, fact = 1, factx = 1;
    int sum = 0;

    cin >> n >> x;

    for(int i = 1 ; i <= n; i++){
        cin >> a;
        for(int j = 1; j <=a; j++){
            fact = fact*j;
        }
        sum = sum + fact;
        fact = 1;
    }

    for(int i = 1; i<=x;i++){
        factx = factx*i;
    }


    if(sum % factx == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}
