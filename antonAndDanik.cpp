#include <iostream>
#include <string>
using namespace std;

int main (){
    int n, a = 0, b = 0;
    string c;
    cin >> n;
    cin >> c;

    for (int i = 0; i <=n; i++){
        if(c[i] == 'A'){
            a++;
        }
        if(c[i] == 'D'){
            b++;
        }

    }
    if(a > b){
        cout << "Anton";
    }else if(b > a){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    return 0;
}
